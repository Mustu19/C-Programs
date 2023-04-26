#include<stdio.h>
#include<string.h>

void decrypt(char str[])
{
    char *ptr = str;
    while(*ptr!='\0')
    {
        *ptr = *ptr - 5;
        ptr++;
    }
}
    int main(){
    char str[] = "Rzxyz%Gmfn";
    decrypt(str);
    printf("The decrypted string is %s" , str);
return 0 ; 
}