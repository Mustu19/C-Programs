#include<stdio.h>
#include<string.h>

    int main(){
    //int n1 , n2 ,  *ptr1 , *ptr2 ;
    // printf("Enter 2 number: ");
    // scanf("%d %d" , &n1  , &n2);
    // ptr1 = &n1 ;
    // ptr2 = &n2;

    // if(*ptr1 > *ptr2){
    //     printf("%d is greater. " , *ptr1);
    // }
    // else{
    //     printf("%d is greater. " , *ptr2);
    // }


    // PRINT ALPHABETS USING POINTER

    char ch = 'A' ; 
    char  *ptr ;
    int i ; 
    ptr = &ch;

    for(i = 1 ; i<=26 ; i++){
        printf("%c ", *ptr );
        ch++ ; 
    }

return 0 ; 
}