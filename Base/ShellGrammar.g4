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
| outputCommand
| errorCommand;

inputCommand: 'execvp' ' ' file=programName (' ' arg=arguments)* ' < ' inputfile=input;
outputCommand: 'execvp' ' ' file=programName (' ' arg=arguments)* op=(' > ' | ' >> ') outputfile=output;
errorCommand: 'execvp' ' ' file=programName (' ' arg=arguments)* ' < ' inputfile=input ' 2> ' errorfile=error op=(' > ' | ' >> ') outputfile=output;

path: dirName+ | '..';

input: STRING '.' STRING;
output: STRING '.' STRING;
error: STRING '.' STRING;

arguments: STRING;
dirName: STRING | '/';
programName: (('./')? STRING) | (('/')? (STRING | '/')+);
STRING: ([A-Za-z0-9] |'-')+;

WS: [ \n\t\r]+ -> skip;