#include<stdio.h>
#include<string.h>

    int main(){
    int a=-1 , b=1 , c=0;
    for(int i = 0 ; c < 55 ; i++){
        c = a+b;
        printf("%d\t\n" ,c);
        a = b;
        b = c;
    }

    
    return 0 ; 
}