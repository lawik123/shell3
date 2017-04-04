grammar ShellGrammar;

program: dirCommands|execCommands|ioCommands;

dirCommands:
getDir #getDirExpression
| changeDir #changeDirExpression
;

getDir: 'pwd';
changeDir: 'cd' (' ' dirPath=path)?;

execCommands: 'execvp' ' ' file=fileName;
ioCommands:;

path: dirName+ | '..';

dirName: STRING | '/';
fileName: (('./')? STRING) | (('/')? (STRING | '/')+);
STRING: ([A-Za-z0-9] |'-')+;

WS: [ \n\t\r]+ -> skip;