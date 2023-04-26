#include<stdio.h>
#include<string.h>

void occurence(char str[] , char c)
{
    int oc = 0;
    for(int i = 0 ; str[i]!='\0' ; i++)
    {
        if(str[i] == 's'){
            oc++;
        }
    }
    printf("\nThe occurence in the given string is %d" , oc);
}
    int main(){
    char str[] = "Mustuuu";
    occurence(str , 's');
return 0 ; 
}