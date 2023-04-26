#include<stdio.h>
#include<string.h>

    int main(){
    int arr[100] , i  , n , num ;
    printf("Enter the no. of elements you want in array..");
    scanf("%d" , &n);
    arr[n] ; 
    for(i=0; i<n ; i++){
        printf("\nElement %d : " , i);
        scanf("%d" , &arr[i]);
    }

    printf("\nEnter the new element which is added at the end.");
    scanf("%d" , &num);
    arr[n] = num  ; 

    for(i=0; i<=n ; i++){
        printf("\nElement %d : %d " , i , arr[i]);
    }

return 0 ; 
}