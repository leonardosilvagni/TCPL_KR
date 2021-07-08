#! /bin/bash

echo "If the program does not behave correctly, you might have accidentally changed the file pattern
The file are structured with the following pattern: Line 1 // esx-x from K&R
Line 2: // Author YEAR
Line 3: // Goal: ..."
Directory=.
if [ -z "$1" ]
then
	cd $Directory
	echo "Error"
	echo "Expected argument to be the number of the Chapter to look for files..."
else
    cd $Directory
    cd Chapter_[$1]
echo "$PWD"
	for i in *.c; do
		sed -n 1p $i #Print the name of the file
		sed -n 3p $i #Print the Goal the program should acheive
		echo 
	done
fi
exit 0
