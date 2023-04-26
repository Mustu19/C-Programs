#include<stdio.h>
#include<string.h>

    int main(){
    int TotalPaisa , Paisa , Rupees;
    printf("Enter the Total Paisa :");
    scanf("%d" , &TotalPaisa);
    Rupees = TotalPaisa/100;
    Paisa = TotalPaisa%100;
    printf("The Rupees is %d and Paisa is %d :" , Rupees , Paisa);   
return 0 ; 
}