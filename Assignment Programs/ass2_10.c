// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int id , salary; 
//     char name[50] ; 
// };
//     int main(){
//         struct employee e ; 
//         printf("Enter Employee name , id and salary : ");
//         scanf("%s %d %d" , e.name , &e.id , &e.salary);

//         printf("EMPLOYEE DETAILS : \nName : %s\nId : %d  \nSalary : %d" , e.name , e.id , e.salary);
// return 0 ; 
// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    
    int *ptr, size; 
    printf("Enter the size of array : ");
    scanf("%d" , &size);
    ptr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] : " , i);
        scanf("%d" , &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nThe address of %d element is %u and its value is %d." , i+1 , &ptr , *ptr);
        ptr++ ; 
    }
    
    return 0 ; 
}