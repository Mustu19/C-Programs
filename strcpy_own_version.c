#include<stdio.h>
#include<string.h>

    int main(){
    char str1[35] , str2[35];
    printf("Enter the value of string :");
    scanf("%s" , str1);

    for(int i = 0 ; str1[i]!='\0' ; i++)
    {
        str2[i] = str1[i];
    }
    printf("\n");
    for(int i = 0 ; str2[i]!='\0' ; i++)
    {
        printf("%c" , str2[i]);
    } 
return 0 ; 
}