grammar ShellGrammar;

program: dirCommands|ioCommands | pipeCommands;

dirCommands:
getDir
| changeDir
;

getDir: 'pwd';
changeDir: 'cd' (' ' dirPath=path)?;

path: dirName+ | '..';


ioCommands: 'execvp ' file=programName (' ' arg=arguments)* (inOp=' < ' inputfile=fileName)? (errOp=' 2> ' errorfile=fileName)? (outOp=(' > ' | ' >> ') outputfile=fileName)?;
pipeCommands: 'execvp ' startFile=programName (' ' startArg=arguments)* (inOp=' < ' inputfile=fileName)? (errOp=' 2> ' errorfile=fileName)? (outOp=(' > ' | ' >> ') outputfile=fileName)? pipeExpr+;

pipeExpr: ' | ' file=programName (' ' arg=arguments)* (inOp=' < ' inputfile=fileName)? (errOp=' 2> ' errorfile=fileName)? (outOp=(' > ' | ' >> ') outputfile=fileName)?;

fileName: STRING '.' STRING;

arguments: STRING | fileName;
dirName: STRING | '/';
programName: (('./')? STRING) | (('/')? (STRING | '/')+);
STRING: ([A-Za-z0-9] |'-')+;

WS: [ \n\t\r]+ -> skip;