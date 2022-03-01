@echo off

set nlm=^


set mingwincpath=G:/cpp/mingw64/include
set mingwlibpath=G:/cpp/mingw64/lib
set gamename=fo-engine-game

dir /s/b *.cpp>paths.txt
set /p pathlist=<paths.txt
echo %pathlist%
set pathlistbuild=!pathlist:%nlm%=^ 

g++ %pathlist% -o %gamename% -I"%mingwincpath%" -L"%mingwlibpath%" -DGAMENAME="%gamename%" -lraylibdll -lraylib
start %gamename%