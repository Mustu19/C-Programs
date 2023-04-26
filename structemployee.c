#include<stdio.h>
#include<string.h>

struct employee{
    int salary; 
    float marks;
    char name[30];
};
    int main(){
        struct employee e
       // struct employee e2;
        //struct employee e3;

        for(int i = 1 ; i <= 3 ; i++){
            printf("Enter the information of employee %d :" , i);
            printf("\nenter Name : ");
            scanf("%s" , e[i].name);
            printf("\nenter salary: ");
            scanf("%d" , &e[i].salary);
            printf("\nenter marks: ");
            scanf("%f" , &e[i].marks );
            printf("\n\n\n");
        }

        for(int i = 1 ; i <= 3 ; i++){
            printf("\n\nThe information of employee %d is name : %s , salary: %d and marks : %.1f" , i , e[i].name , e[i].salary , e[i].marks);
        }


    
return 0 ; 
}