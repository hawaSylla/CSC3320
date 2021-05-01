#include <stdio.h>

unsigned int factorial(unsigned int n)
{
        if (n == 0)
        
                return 1;
        return n * factorial(n - 1);

}

int main()
{
        int testInt;
        printf("Enter a positive integer to use recursion on");
        scanf("%d", &testInt);
        printf("Factorial of %d is %d", testInt, factorial(testInt));
        return 0;
}
~                                                                                                                               
~                               