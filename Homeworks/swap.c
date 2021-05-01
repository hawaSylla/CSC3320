#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;

	printf("Enter the numbers to swap:\n");

	scanf("%d",&a); //input line here and variable a here
	

	scanf("%d",&b); //input variable b here
	printf("Swap before: a=%d b=%d \n",a,b);
	
	a = a*b;
	
	b = a/b;

	a = a/b;

	printf("Post Swap: a=%d b=%d",a,b );

	return 0;

}
