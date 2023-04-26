#include<stdio.h>
#include<string.h>
    int main(){
    char str[] = {'M','U','S','T','U','\0'};
    //char str[] = "HARRY";
    for(int i=0; str[i]!='\0' ; i++)
    {
        printf("%c" , str[i]);
    }
    
return 0 ; 
}