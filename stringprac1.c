#include<stdio.h>
#include<string.h>

    int main(){
    char str1[35] ,str2[35];
    char c;
    int i=0;
    printf("enter the value of 1st string:");
    scanf("%s" ,str1);

    printf("\nEnter the value of second string character by character:"); 

    while(c!='\n'){
        fflush(stdin);
        scanf("%c" , &c);
        str2[i] = c;
        i++;
    }
   // str2[i] = '\0';
    str2[i-1] = '\0';

    printf("\nthe value of str1 is %s\n" , str1);
    printf("\nthe value of str2 is %s\n" , str2);     

    printf("\nstrcmp for these strings returns %d" , strcmp(str1 , str2));
return 0 ; 
}