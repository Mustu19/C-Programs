#include<stdio.h>
#include<string.h>

    int main(){
    char *s1,*s2;
    gets(s1);
    gets(s2);
    if(s1==s2){
        printf("same");
    }
    else{
        printf("different");
    }
return 0 ; 
}