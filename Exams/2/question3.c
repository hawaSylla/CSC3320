//question3

#include<stdio.h>
#include<stdlib.h>
#define MAX_NUMS 30
void sort_num(int arr[], int n, char sortT){
if(sortT == 'a' || sortT == 'A'){
        //sort acending
int i,j,temp;
for(i = 0; i < n - 1; i++){ // nested loop that interates through each element in array and checks if item next to it is larger
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
//sort decending
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
        char c;
        int val;
        int i;
        int n;
        int* arr;
        size_t size = MAX_NUMS;
        arr = calloc(size,sizeof(int));
        if(arr == NULL){
            printf("Array empty");
            return 1;
        }
        printf("Enter array elements, please !\nPress '000' when you are done\n");
        while(val != 000){
        scanf("%d",&val);
        *(arr + i) = val;
        n++;
        }
        arr = realloc(arr,n * sizeof(int));
        if(arr == NULL){
            printf("Array empty");
            return 1;
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
                //free(arr);
                return 0;
}