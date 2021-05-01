#!bin/bash

#This script is to find files in a directory that have nott been accessed 
#for the given time period, and then archive those documents. 

exit=0

while [ $exit -ne 1 ]

do

echo select option

printf "1.find and archive\n2.Exit\n"

read ans

if [ $ans -eq 1 ]

then


printf "You  want to archive files that have not been accessed in many days ?"

read age

find /home/hsylla2 -type f -atime "+$age" -exec gzip {} \;

echo done!

elif [ $ans -eq 2 ]

then

exit=1

else

printf "Not valid, try again "

fi

done
