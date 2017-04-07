grammar ShellGrammar;

program: dirCommands|execCommands|ioCommands | pipeCommands;

dirCommands:
getDir
| changeDir
;

getDir: 'pwd';
changeDir: 'cd' (' ' dirPath=path)?;

path: dirName+ | '..';

execCommands: 'execvp ' file=programName (' ' arg=arguments)* ;
ioCommands: 'execvp ' file=programName (' ' arg=arguments)* (inOp=' < ' inputfile=fileName)? (errOp=' 2> ' errorfile=fileName)? (outOp=(' > ' | ' >> ') outputfile=fileName)?;
pipeCommands: 'execvp ' startFile=programName (' ' startArg=arguments)* pipeExpr+;

pipeExpr: ' | ' file=programName (' ' arg=arguments)*;

fileName: STRING '.' STRING;

arguments: STRING | fileName;
dirName: STRING | '/';
programName: (('./')? STRING) | (('/')? (STRING | '/')+);
STRING: ([A-Za-z0-9] |'-')+;

WS: [ \n\t\r]+ -> skip;