#include<stdio.h>
#include<string.h>

    int main(){
    int null[3][10];
    for(int i=0; i<10; i++){
        null[0][i]=2*(i+1);

    
    for(int i=0; i<10; i++){
        printf("\n2x%d=%d",i+1 , null[0][i]);
    }
    }
return 0 ; 
}