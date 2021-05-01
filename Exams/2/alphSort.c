#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int compare(const void* a, const void* b){ //this method is setting up the comparison rules
    return strcmp(*(const char**)a, *(const char**)b);
}
static int compareReverse(const void* a, const void* b){ //this comparator aids in reverse sorting
   return strcmp(*(const char**)b, *(const char**)a);
}
//array sort function
void sort(const char* arr[],int n){     
	qsort(arr,n,sizeof(const char*), compare);  //using qsort to help sort array along with comparator
}
//array reverse sort function
void rSort(const char* arr[],int n){
	qsort(arr,n,sizeof(const char*), compareReverse);  //using qsort to help sort array along with reversed comparator
}
int main(){
//get array of words sorted:
	const char* arr[]={"Systems", "Programming","Deep","Learning","Internet","Things","Robotics","Course" };
	int n = sizeof(arr)/sizeof(arr[0]);
        int i;
        char s;
        printf("Given array is: "); //printing out the given list
        for(i=0;i<n;i++){
        printf("\n%d: %s",i,arr[i]);
	}
 	printf("Enter the order of elements.\n ('a'/'A' = ascension • 'd'/'D' = descension)\n");
        scanf("%c",&s);
	if(s == 'a' || s == 'A'){ //if the user chooses A, the list will sort in ascending order
        sort(arr,n); //sort function;
        }
        else if(s == 'd' || s == 'D'){ //if the user chooses D, the list will sort in Descending order.
        rSort(arr,n); 
        }
        printf("\n");
        printf("\nArray Sorted :" ); //printing out the sorted list
	for(i=0;i< n;i++){
	printf("\n%d:%s",i,arr[i]);
	}
	return 0;
}
