#include<stdio.h>
#include<string.h>

    int main(){
    FILE *ptr;
    ptr = fopen("employee.txt" , "w");

    int sal1 , sal2;
    char name1[40], name2[40];

    printf("Enter the names of 2 employees: ");
    scanf("%s %s" , name1 , name2);

    printf("\n\nEnter the salary of 2 employees respectively :");
    scanf("%d %d" , &sal1 , &sal2);  


    printf("the name of employee is %s " , name1);
    fprintf(ptr , "Employee 1 salary is  %d and Employee 2 salary is %d" , sal1 , sal2); 
return 0 ; 
}