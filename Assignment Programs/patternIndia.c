#include<stdio.h>
#include<string.h>

    int main(){
    char str[80] ; 
    int i , j , n ; 
    printf("Enter string : ");
    gets(str);
    n = strlen(str);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c" , str[j]);
        }
        for ( j = 0; j <= 2*n - 2*i ; j++)
        {
            printf(" ");
        }
         printf("\b\b\b\b");
        for ( j = i; j >= 0; j--)
        {
            printf("%c" , str[j]);
        }
        printf("\n");
    }
    
return 0 ; 
}