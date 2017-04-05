grammar ShellGrammar;

program: dirCommands|execCommands|ioCommands;

dirCommands:
getDir
| changeDir
;

getDir: 'pwd';
changeDir: 'cd' (' ' dirPath=path)?;

execCommands: 'execvp' ' ' file=programName (' ' arg=arguments)*;
ioCommands: inputCommand
| outputCommand;
//| errorCommand;

inputCommand: execCommands ' < ' inputfile=input;
outputCommand: 'execvp' ' ' file=programName (' ' arg=arguments)* ' > ' outputfile=output;
//errorCommand: program ' < ' file;




path: dirName+ | '..';

input: STRING '.' STRING;
output: STRING '.' STRING;
arguments: STRING;
dirName: STRING | '/';
programName: (('./')? STRING) | (('/')? (STRING | '/')+);
STRING: ([A-Za-z0-9] |'-')+;

WS: [ \n\t\r]+ -> skip;