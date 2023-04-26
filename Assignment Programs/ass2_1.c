#include<stdio.h>
#include<string.h>

    int main(){
    int arr[100] , n , target , i ; 
    printf("Enter the number of elements in an array : ");
    scanf("%d" , &n);
    for ( i = 0; i < n; i++)
    {
        printf("arr[%d]:" , i);
        scanf("%d" , &arr[i]);
    }
    printf("\n\nEnter the target element you want to search : ");
    scanf("%d" , &target);
    // for ( i = 0; i < n && target!=arr[i] ; i++)
    // {
    //     i++;
    // }
    // if(i<n){
    //     printf("The target element is at Index %d." , i);
    // }
    // else{
    //     printf("Target element is not in given array.");
    // } 
    for (i = 0; i < n ; i++)
    {
        if(arr[i] == target){
            printf("Target element is at Index %d." , i);
        }
    }
       
return 0 ; 
}