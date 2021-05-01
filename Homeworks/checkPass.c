#include<stdio.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0


int main()
{
	int uCFlag = FALSE;
        int lCFlag = FALSE;
	int numFlag = FALSE;
	char ch;

	printf("Enter a potential password : "); //this is a prompt for the user to enter the pass
	
	int count = 0; // this is to count the length of the password


	do{
		ch = getchar(); //reading each character that is entered

		count ++; // with each character entered, we increment the count of the user's pass
	
		// condition for checking for lowercase and capital letter

	        if(ch>64 && ch<91)
	         {
        	        uCFlag = TRUE;
			printf("UCFlag: %d\n",uCFlag); //debugger to check if True flag was flagged
      		 }
       		 else
       		 {
                	lCFlag = TRUE;
		 }
		 numFlag = isdigit(ch);
		
	}

	while(ch != '\n'); //while the user has not pressed enter;

	int score = -(10 - count + 1) * 5 ; // we are keeping track of the count where the minimum has to be 10. when the count is less than ten, it will end up having a negative score.

	// The following is the additional conditions as requested by part 2		
	
	if(uCFlag = FALSE)
	{
	 	score - 20;	
	}
	else if(lCFlag = FALSE)
	{
		score - 20;
	}	
	else if(numFlag = 0)
	{
		score - 20;
	}
	// ^condition for missing number
		
	
	printf("Score = %d\n",score);


	if(score <= -30)

		printf("The passowrd is unsafe. Reset please ! "); //per the instructions, when the decrement is less than 30, the User will be prompted to start over and make a new password. 

	else
		printf("The password is safe ! Hooray !");


	return 0;


}		
