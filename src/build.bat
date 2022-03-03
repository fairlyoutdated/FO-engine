@echo off

set nlm=^


set mingwincpath=G:/cpp/mingw64/include
set mingwlibpath=G:/cpp/mingw64/lib
set gamename=fo-engine-game

dir /s/b *.cpp>paths.txt

buildtool

set /p pathlist=<paths.txt
echo %pathlist%

g++ %pathlist% -o %gamename% -I"%mingwincpath%" -L"%mingwlibpath%" -DGAMENAME="%gamename%" -lraylibdll -lraylib -fpermissive
rem start %gamename%