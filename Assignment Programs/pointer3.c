#include<stdio.h>
#include<string.h>

    int main(){
    char str1[50] , str2[50] , *ptr1 , *ptr2 ; 
    int i , flag ;
    printf("Enter 2 Strings : ");
    gets(str1);
    gets(str2);
    ptr1 = str1;
    ptr2 = str2;
    
    // going to end the end of string
     while(*(++ptr1));
 
    // Coping str2 to str1
    while(*(ptr1++) = *(ptr2++));
    printf("Concatenated string: %s", str1);
return 0 ; 
}