#!bin/bash

#phonebook util

exit=0

data="phonebook.txt"

while [ $exit -ne 1 ]

do

echo select function

printf "1.Add Entry\n2.Display\n3.Delete\n4.Exit\n"

read ans

if [ "$ans" -eq 1 ]

then

printf "Enter first name "

read firstname

printf "Enter surname please! "

read sname

printf "Enter the person's number, please ! "

read num

echo "$firstname $sname:$num" >> $data


elif [ "$ans" -eq 2 ]

then

echo Records:

sort -k 1 "phonebook.txt"


elif [ "$ans" -eq 3 ]

then

printf "Enter number to delete from database: "

read phoneNum

sed -i "$phoneNum"'d' $data



elif [ "$ans" -eq 4 ]

then

exit=1

else 

printf "Not a valid option, try again\n"

fi

done