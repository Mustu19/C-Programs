#include<stdio.h>
#include<string.h>

    int main(){
    int arr[100] , n , i , max = 0 , min ;
    printf("Enter the number of elements in an array : ");
    scanf("%d" , &n);
    for ( i = 0; i < n; i++)
    {
        printf("arr[%d]:" , i);
        scanf("%d" , &arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i] ; 
        }
    }
    printf("\n\nLargest element in the given array is %d." ,max);
    min = max ; 
    for ( i = 0; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i] ; 
        }
    }
    printf("\n\nSmallest element in the given array is %d." ,min);
    
    
    
return 0 ; 
}