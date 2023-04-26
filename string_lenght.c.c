#include<stdio.h>
#include<string.h>

    int main(){
        //LENGTH
    char *name = "harry bhai";
    int length = 0;
    //printf("the length of String is %d." , strlen(name));

    for(int i = 0 ; name[i]!='\0' ; i++)
    {
        length++;
    }
    printf("the length of string is %d" , length);
return 0 ; 
}