#include<stdio.h>
#include<string.h>

//call by value
void swap(int a , int b){
    int c; 
    c = a;
    a = b ; 
    b = c ; 
    printf("The swapped values are A = %d and B = %d." , a , b);
}

// call by referse
void swapRef(int *a , int *b){
    int c; 
    c = *a;
    *a = *b ; 
    *b = c ; 
    printf("The swapped values are A = %d and B = %d." , *a , *b);

}

    int main(){
        int a, b;
        printf("Enter 2 integers : ");
        scanf("%d %d" , &a , &b);
         swap(a , b);
        swapRef(&a , &b);
    
return 0 ; 
}

