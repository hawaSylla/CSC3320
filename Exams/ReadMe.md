# **Read me For Exam 1**
## list of scripts :
* archive.sh
* helpme.sh
* phoneBook.sh
* factorial.c
* newval.c

---
## _archive.sh_

This script is to find files in a directory that have not been accessed for the given time period, and then archive those documents. 

### Execution instructions:
 * user is given options to
    * find and archive
    * exit
* when archiving, the user is prompted to choose how many days old they want the files to be before they are archived

* after doing so , the corresponding files will be archived

## _helpme.sh_

Collection of manuals for Unix shell commands

### Execution instructions:
 * user types in command
 * util will print out corresponding information about typed command
 * if user types in command that is not in tool, error message will be returned. 

## _phoneBook.sh_

A Phone book utility allows user to access and modify an alphabetical list of names, addresses and telephone numbers. 

### Execution instructions:
* To Use: ./phoneBook.sh
* select function from 4 options, type the corresponding option
* to add entry, enter the first name, last name, and the phone number. To delete entry, enter the corresponding number. When the
* user is finished, press 4 to exit the utility.

## _factorial.c_

This script is to compute the factorial of a given number (positive integer)

### Execution instructions:

* The system will prompt you for a positive integer to use recursion on. 
* Enter a positive integer. 
* The system will output the answer.

## _newval.c_

This script is to find the new integer value of an original integer when it is bit-shifted left by 3 bits and added to its complement
### Execution instructions:
* compile newval.c ($cc -o newval newval.c) 
* execute the compiled program: newval. (./newval)
* The system will prompt you for a positive integer to enter. 
* Enter a positive integer. 
* The system will output the answer.