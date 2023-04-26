#include<stdio.h>
#include<string.h>

    int main(){
    int arr[100] , cpy[100] , i , n , *ptr1 , *ptr2 ;  
    ptr1 = arr;
    ptr2 = cpy ; 
    printf("Enter the no. of elements you want in array : ");
    scanf("%d" , &n); 
    
    for ( i = 0 ; i < n  ;  i++)
    {
        printf("arr[%d] : " , i); 
        scanf("%d" , &*(ptr1+i));
    }   
    printf("\n\nElements after copying to Second Array...\n");
    for (i = 0; i < n; i++)
    {
        *(ptr2+i) = *(ptr1+i) ; 
        printf("%d  " , *(ptr2+i));
    }

    
    
return 0 ; 
}