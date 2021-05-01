#include<stdio.h>


void sort_num(int arr[], int n, char sortT){
if(sortT == 'a' || sortT == 'A'){
//sort ascending
int i,j,temp;
for(i = 0; i < n - 1; i++){ // nested loop that iterates through each element in array and checks if item next to it is larger
for(j = 0; j < n - 1; j++){
if(*(arr + j) > *(arr + j + 1)){
temp = *(arr + j) ;
*(arr + j) = *(arr + j + 1) ;
*(arr + j + 1) = temp ;
}
}
}
}
else if(sortT == 'd' || sortT == 'D'){
//sort descending
int i,j,temp;
for(i = 0; i < n - 1; i++){ // nested loop that iterates through each element in array and checks if it is less than the item next to it
for(j = 0; j < n - 1; j++){
if(*(arr + j) < *(arr + j + 1)){
temp = *(arr + j) ;
*(arr + j) = *(arr + j + 1) ;
*(arr + j + 1) =  temp ;
}
}
}
}
else{
	printf("Invalid Entry, please try again. "); // if user does not put in valid letter, then they will be asked to try again

}
}

int main(){
	int n; //size of array

	printf("Enter array size:\n");
	scanf("%d",&n);

	int arr[n];
	int val;
	char c;
	printf("Enter array elements, please !\n");
	for(int i = 0; i < n ; i++){
	scanf("%d",&val);
	*(arr + i) = val; 
	}
	printf("Enter the order of elements.\n ('a'/'A' = ascension • 'd'/'D' = descension)\n");
	scanf("%c",&c);
	scanf("%c",&c);
	sort_num(arr,n,c);
	printf("Sorted Array:\n");
	for(int i = 0; i < n; i++){
		printf("%d",*(arr + i));
		printf("\n");
	}
		return 0;
}

