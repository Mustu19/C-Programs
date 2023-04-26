#include<stdio.h>
#include<string.h>

    int main(){
    char name[30] ;
    int  i  , count = 0 , len ;  
    puts("Enter any String:");
    gets(name);
    for ( i = 0; name[i]!='\0'; i++)
    {
        len++;
        switch(name[i]){
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                count++ ; 
                break;
            default : 
                break;
        }
    }
    printf("Total no. of vowel in the given string is %d." , count);
    printf("\nTotal no. of consonants in given string is %d." , len - count);
    
    
return 0 ; 
}