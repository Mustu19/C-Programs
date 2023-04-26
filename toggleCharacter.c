#include<stdio.h>
#include<string.h>

    int main(){
    char str[100] , i ;
    puts("Enter any string : ");
    scanf("%s" , &str);

    for(i=0 ; str[i]!='\0' ; i++){
        if(str[i]>='A' && str[i] <='Z' ){
            str[i] = str[i] + 32 ; 
             printf("%c" , str[i]);
        }
        else{ 
            str[i] = str[i] - 32 ; 
            printf("%c" , str[i]);
        }

    }
   
return 0 ; 
}   