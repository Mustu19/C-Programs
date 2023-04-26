#include<stdio.h>

    int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *ptr;
    ptr = &arr[0];
    printf("The value of 1st element in the array is %d" , ptr[0]);
    printf("\nThe value of 3st element in the array is %d" , *(ptr+2));

    if(ptr = &arr[0])
    {
        printf("\nthis points to the same location in memory");
    }
    else{
        printf("\nthis points to the different location in memory");
    }
return 0 ; 
}