#include<stdio.h>
#include<string.h>

int add(int n ){

    int sum = 0 ; 
    sum = sum + n;
    return sum ; 
}
    int main(){
        int ans , num; 
        char ch[99];
        do{
            printf("Enter the number : ");
            scanf("%d" , &num);
            ans = num;
            printf("\npress x to continue...");
            gets(ch) ;
        }while(ch=="x");
return 0 ; 
}