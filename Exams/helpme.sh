#!bin/bash

#Collection of manuals for Unix shell commands
exit=0

data="mandatabase.txt"

while [ $exit -ne 1 ]

do

echo type in command you want to find or press 2 to exit.

print f "1.Find command\n2.Exit"

read ans

if [ "$ans" -eq 1 ]

then

printf "Available commands: \nawk\ncmp\ndiff\ntar\ntime\ntr\nul\nfgrep\nsed\nsort\n"
exit=0

data="mandatabase.txt"

while [ $exit -ne 1 ]

do

echo type in command you want to find. Press 1 to begin and see available commands, or press 2 to exit.

read ans

if [ $ans -eq 1 ]

then

printf "Available commands: awk\ncmp\ndiff\ntar\ntime\ntr\nul\nfgrep\nsed\nsort\n"


read comm

if [ "$comm" = "awk" ]

then

sed -n '1,1697 p;1698q' mandatabase.txt

elif [ "$comm" = "cmp" ]

then 

sed -n '1699,1772 p;1773q' mandatabase.txt

elif [ "$comm" = "diff" ]

then

sed -n '1774,2015 p;2016q ' mandatabase.txt

elif [ "$comm" = "tar" ]

then

sed -n '2018,2586 p;2587q ' mandatabase.txt 


elif [ "$comm" = "time" ]

then

sed -n '2590,2775 p;2776q ' mandatabase.txt


elif [ "$comm" = "tr" ]

then

sed -n '2776,2906 p;2907q ' mandatabase.txt


elif [ "$comm" = "ul" ]

then

sed -n '2910,2965 p;2966q ' mandatabase.txt


elif [ "$comm" = "fgrep" ]

then

sed -n '2967,3546 p;3547q ' mandatabase.txt


elif [ "$comm" = "sed" ]

then

sed -n '3549,3828 p;3829q ' mandatabase.txt


elif [ "$comm" = "sort" ]

then 

sed -n '3831,3987 p' mandatabase.txt


else

printf "sorry, I cannot help you"

fi

elif [ "$ans" -eq 2 ]

then

exit=1

else

printf "Not valid, try again "

fi

done
-- INSERT --                 