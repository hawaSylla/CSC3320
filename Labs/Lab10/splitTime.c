#include<stdio.h>
// Write the declaration of function split_time

 void split_time(int total_sec, int *hr, int *min, int *sec);
 
 int main(){
	 int n,hr,min,sec;
	 printf("Enter seconds:");
	 scanf("%d",&n);
	 int total_sec = n;
	 /* Write the statement to call split_time */
	 split_time(total_sec,&hr,&min,&sec);	
	 printf("Converted format: %d hour %d mins %d secs",hr,min,sec);
	 return 0;
 }
	 void split_time(int total_sec, int *hr, int *min, int *sec){ /* Write the statements to calculate hr, min and sec */
		*hr = total_sec / 3600;
		total_sec = total_sec%3600;
		*min = total_sec/60;
		*sec = total_sec%60;	
		
		return;		
}
