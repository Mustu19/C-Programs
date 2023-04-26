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
    while (*ptr1 == *ptr2)
    {
        
        if(*ptr1 == '\0' || *ptr2 == '\0'){
            break;
        }
        ptr1++;
        ptr2++;    
    }
    if(*ptr1=='\0' && *ptr2=='\0'){
        printf("String is same");
    }
    else{
        printf("String is not same");
    }
return 0 ; 
}