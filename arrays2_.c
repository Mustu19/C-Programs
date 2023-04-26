#include<stdio.h>
#include<string.h>
#include <stdlib.h>

    int main(){

    

    // int arr[10];
    // int a;
    
    // printf("enter a\n");
    // scanf("%d",&a);
    // for(int i=0; i<10; i++)
    // {
    //     arr[i]=(a*(i+1));
    // }
    // for(int i=0; i<10; i++)
    // {
    //     printf("\n%dx%d=%d",a,i+1 , arr[i]);
    // }
    int i , j , k , m , n , o = 97;
    printf("Enter no. of rows:");
    scanf("%d" , &n);
    for (i = 0; i < n ; i++)
    {
        for (j = 0; j < n-i ; j++)
        {
            printf("  ");
        }
        for (k = 97+i; k >=97; k--)
        {
            printf(" %c" , k);
        }
        for (m = 98;  m < (98+i); m++)
        {
            printf(" %c" , m);
        }
        
        printf("\n");
    }
    

return 0 ; 
}