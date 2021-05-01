#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{

char input[21],smallest_word[21],largest_word[21];

printf("Word please: ");
scanf("%s",input);
strcpy(smallest_word,input);
strcpy(largest_word,input);

while(strlen(input)!=4)
{

if(strlen(input)<smallest_word)

	strcpy(smallest_word,input);

else if(strlen(input)>largest_word)

	strcpy(largest_word,input);


printf("Word please: ");
scanf("%s",input);
}

printf("Smallest Word: %s\n",smallest_word);
printf("Biggest/Largest Word: %s\n",largest_word);

return 0;

}
