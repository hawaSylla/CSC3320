#include <stdio.h>


int main(void)
{

	int area_code, exchange, subscriber;

	printf("\nEnter phone Number Please! Format: [(xxx) xxx-xxxx] : ");

	scanf("(%d) %d-%d", &area_code, &exch, &subsc);


	printf(" You entered %d - %d - %d\n\n", area_code, exch, subsc);


	return 0;

}
