#include<stdio.h>
#include<string.h>

    int main(){
    char str[5];
    gets(str);
    puts(str);
    int asci[5];
    for(int i =0 ; i<5; i++){
        printf("%d\n" , str[i]);
    }
    
return 0 ; 
}