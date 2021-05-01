#include <stdio.h>



int main() {

    int a = 0;
    int b = a << 3;
	

   printf("Enter an integer number to get the new value !");

	scanf("%d",&a);
	
	int nv = ~a + b;
	
	printf("%d\n", nv ) ;
	
	return 0;
}