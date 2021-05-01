#include<stdio.h>

#define COUNTRY_COUNT \
	 ((int) (sizeof(country_codes) / sizeof(country_codes[32])))
//#define COUNTRY_COUNT 32 
//above, we are defining the number of countries by taking the amount of countrycodes in the
//following struct

struct dialing_code {
	char *country;
	int cCode;
};
//^ this struct makes up the 'dialing code', consisting of the country and the country's code.

const struct dialing_code country_codes[32] =
{{"Argentina",            54}, {"Bangladesh",      880},
   {"Brazil",               55}, {"Burma (Myanmar)",  95},
   {"China",                86}, {"Colombia",         57},
   {"Congo, Dem. Rep. of", 243}, {"Egypt",            20},
   {"Ethiopia",            251}, {"France",           33},
   {"Germany",              49}, {"India",            91},
   {"Indonesia",            62}, {"Iran",             98},
   {"Italy",                39}, {"Japan",            81},
   {"Mexico",               52}, {"Nigeria",         234},
   {"Pakistan",             92}, {"Philippines",      63},
   {"Poland",               48}, {"Russia",            7},
   {"South Africa",         27}, {"South Korea",      82},
   {"Spain",                34}, {"Sudan",           249},
   {"Thailand",             66}, {"Turkey",           90},
   {"Ukraine",             380}, {"United Kingdom",   44},
   {"United States",         1}, {"Vietnam",          84}};
//^ the array of countrycode structs, where the given countries and phone codes lie
// for the example, I just used the ones from the textbook. 
int main(void)
{
	int code, i;
	printf("Enter Dial code ! : ");
	scanf("%d", &code);
	for (i = 0; i < COUNTRY_COUNT; i++)  // this loop will iterate and search through the length of the Country Count struct
	{
	if (code == country_codes[i].cCode) // if the code that was entered matches the code in the struct...
	{
		printf("The country with dialing code %d is %s\n", code, country_codes[i].country);
		return 0; // when it it found, the country along with its code is returned to user.
	}
	printf( "No Country match found, try again please ! \n"); // else, an error message will be returned. 
	return 0;
	}
}	
