#include<stdio.h>
#include<string.h>

typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c){
    printf("\nthe value of real part is %d" , c.real);
    printf("\nthe value of imaginary part is %d" , c.complex);
}
    int main(){
    comp cnums[5];
    for(int i = 0 ;  i < 5 ; i++){
        printf("\na[%d] : " , i+1);
        scanf("%d" , &cnums[i].real);

        printf("\na[%d] : " , i+1);
        scanf("%d" , &cnums[i].complex);
    }

    for(int i = 0 ;  i < 5 ; i++){

        display(cnums[i]);
    }
return 0 ; 
}