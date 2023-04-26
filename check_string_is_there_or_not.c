#include<stdio.h>
#include<string.h>

void checkString(char str[] , char c)
{
    int y=0 , n=0;
    for(int i = 0 ; str[i]!='\0' ; i++)
    {
        if(str[i] == 'z')
        {
            y++;
        }
    }
    if(y>1)
    {
        printf("the given character is present is a string.");
    }
    else
    {
        printf("the given character is not present is a string.");
    }

}
    int main(){
    char str[] = "spiderman no way home";
    checkString(str , 'z');
return 0 ; 
}