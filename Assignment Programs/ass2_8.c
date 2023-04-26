#include<stdio.h>
#include<string.h>

    int main(){
    int arr[30] , *ptr ;
    int  n , i ;
    printf("Enter the no. of elements you want in array : ");
    scanf("%d" ,&n);
    arr[n] ; 
    ptr = arr ; 
    for ( i = 0; i < n; i++)
    {
        printf("arr[%d] : " , i);
        scanf("%d" , &*(ptr+i));
    }
    printf("\nReverse of the Array is : " );
    for ( i = 0; i < n; i++)
    {
        printf("%d " , ptr[n-i-1]);
    }
    
    
return 0 ; 
}