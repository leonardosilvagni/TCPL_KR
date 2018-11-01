#! /bin/bash

echo "If the program does not behave correctly, you might have accidentally changed the file pattern
The file are structured with the following pattern: Line 1 // esx-x from K&R
Line 2: // Author YEAR
Line 3: // Goal: ..."
Directory=/home/leonardo/Work/TCPL_KR/
if [ -z "$1" ]
then
    cd $Directory
else
    cd $Directory
    cd Chapter_[$1]
fi
echo "$PWD"
for i in *.c; do
	sed -n 1p $i #Print the name of the file
	sed -n 3p $i #Print the Goal the program should acheive
	echo 
done
exit 0
