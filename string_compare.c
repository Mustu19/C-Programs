#include<stdio.h>
#include<string.h>

    int main(){
    char str1[] = "Mustu" ;
    char str2[] = "Mu8tu" ; 
    //it will return 1 here.

    int val = strcmp(str1 , str2);
    printf("the value of val is %d" ,val);

    //strcmp if both string are same then it return 0 otherwise 1.
    // if first letter of both strings are not equal then it returns -1 .
return 0 ; 
}