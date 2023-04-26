#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code ;
    char str[50];
}emp;

void show(emp emp1){ 
    printf("\nThe Code of employee id %d" , emp1.code);
    printf("\nThe String of employee id %s" , emp1.str);
}
    int main(){
        emp e;
        emp *ptr;
        ptr = &e;
        ptr->code = 25; 
       strcpy(ptr->str , "Mustu"); 

       show(e);
    
return 0 ; 
}