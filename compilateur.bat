@echo off
:: @echo off allow to not show command of the file in the terminal
echo Start compiling file
cd src
rm ./chess.exe
g++ main.cpp Board.cpp -o chess

if ERRORLEVEL 0 GoTo Success
else GoTo Failure

:Failure
echo error in compilation, please check the error logs file


:Success
echo compilation complete without error


