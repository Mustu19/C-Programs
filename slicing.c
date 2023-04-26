#include<stdio.h>
#include<string.h>

void slice(char str[] , int m , int n)
{
    int i = 0;
    while((m+i)<n){
        str[i] = str[i+m];
        i++;
    }
    str[i] = '\0';
}
    int main(){
    char str[] = "Mustu Bhai";
    slice(str , 0 , 7);
    printf("\nThe String is %s" , str);
return 0 ; 
}