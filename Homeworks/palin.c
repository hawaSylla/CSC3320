#include<stdio.h>

#include<string.h>

#define MAX_LEN 100
//I'm just setting the Maximum length of the string to be 100 characters. 
//

int is_palindrome(char *seq, int seq_length){

	int isPal = 1; //setting the sequence to be palindrome by default
	
	char rev_seq[MAX_LEN]; // keeping track of the reverse of the sequence/string

	int j=0; //index of reverse

	for(int i = seq_length-1; i >= 0; i--) //for the length of the sequence
	{
		rev_seq[j]=seq[i]; //putting the reverse of the sequence into the reverse sequence holder
		j++; //increment j so it can keep going through the sequence
	}
	
	rev_seq[j]='\0'; //ending sequence with null for string
 
	for(int i = 0; i< seq_length; i++)
	{
		if(seq[i]!= rev_seq[i]) // if the sequence character in the index does NOT match the reverse character in the index,
		{ isPal = 0;
			break;
		}
	}

return isPal;

}

int main()
{

char seq[MAX_LEN];

printf("Enter the Sequence please ! : ");
//^prompt to ask user for possible palindrome
scanf("%s",seq); 
//^user input 
if(is_palindrome(seq,strlen(seq))) //taking the input information, so the user inputted sequnce, and the program determined sequence length. 
{
	printf("%s is a palindrome ! Yay !\n",seq); // if isPalindrome is true, then return a sentence signifying that to the user. 
}

else

{

printf("%s is not palindrome, sorry !\n",seq); // if isPalindrome is false, then return a sentence signifying that it is not a palindrome.

}

return 0;


}


