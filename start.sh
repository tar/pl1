#! /bin/bash 
echo
echo ' PL/1 -> Asswmbler compiling'
echo "continue?(y/n)"
read RES
if [ $RES = "y" ] 
then
 echo
 ./komppl.exe  examppl.pli
fi
echo "Completed"
echo
echo ' Assembler ->  Object image compiling'
echo "continue?(y/n)"
read RES
if [ $RES = "y" ] 
then
 echo
./kompassr.exe examppl.ass
fi
echo
echo ' Load, run and debug Object image  '
echo "continue?(y/n)"
read RES
if [ $RES = "y" ] 
then
 echo
./absloadm.exe spis.mod
fi
echo
