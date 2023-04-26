#include<stdio.h>
#include<string.h>
void length(char str[]){
    
    char *ptr ; 
    int i  , len
    ptr = str ; 
    for ( i = 0; *ptr!='\0'; i++)
    {
        len++;
        ptr++ ; 
    }
    printf("Length of String is %d." , len);
}
    int main(){
    char str[50] ; 
    printf("Enter a String : ");
    gets(str);
    length(str);
    
return 0 ; 
}