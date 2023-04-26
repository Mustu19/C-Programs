#include<stdio.h>
#include<string.h>

    int main(){
    char str1[50] , str2[50] , *ptr1 , *ptr2 ; 
    int i , flag ;
    printf("Enter a Strings : ");
    gets(str1);
    ptr1 = str1;
    ptr2 = str2;
    for (i = 0 ; *ptr1!='\0' ; i++)
    {
        *ptr2 = *ptr1 ; 
        ptr1++;
        ptr2++;
    }  
    *ptr2='\0';  
    printf("Copy of the string is %s." , str2);
return 0 ; 
}