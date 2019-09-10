rem this is my custom simple build tool.
@echo off
cls
set mainSourceFile=main.c
set sourceFile1=asciiart.c
set outputFile=./bin/art.exe

gcc %mainSourceFile% %sourceFile1% -Wall -std=c99 -o %outputFile%

if %errorlevel% neq 0 (
echo compilation error
pause
) else (
echo successfull compilation
pause
start %outputFile%
)
