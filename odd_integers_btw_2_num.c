#include<stdio.h>
#include<string.h>

    int main(){
    int a , b ;
    printf("Enter 2 numbers :");
    scanf("%d %d" ,&a , &b);
    while(a<=b){
        if(a%2==1){
            printf("\n%d" ,a);
            a++;
        }
        else if(a%2==0){
            a++;
        }
    }
    return 0;
}