grammar ShellGrammar;

program: dirCommands|execCommands|ioCommands;

dirCommands:
getDir
| changeDir
;

getDir: 'pwd';
changeDir: 'cd' (' ' dirPath=path)?;

execCommands: 'execvp' ' ' file=programName (' ' arg=arguments)* ;
ioCommands: 'execvp' ' ' file=programName (' ' arg=arguments)* (inOp=' < ' inputfile=fileName)? (errOp=' 2> ' errorfile=fileName)? (outOp=(' > ' | ' >> ') outputfile=fileName)?;

path: dirName+ | '..';

fileName: STRING '.' STRING;

arguments: STRING;
dirName: STRING | '/';
programName: (('./')? STRING) | (('/')? (STRING | '/')+);
STRING: ([A-Za-z0-9] |'-')+;

WS: [ \n\t\r]+ -> skip;