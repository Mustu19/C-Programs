// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code ;
//     char str[50];
// };

// void show(struct employee emp){ 
//     printf("The Code of employee id %d\n :" , emp.code);
//     printf("The String of employee id %s\n :" , emp.str);
// }
//     int main(){
//         struct employee e;
//         struct employee *ptr;
//         ptr = &e;
//         ptr->code = 25; 
//        strcpy(ptr->str , "Mustu"); 

//        show(e);
    
// return 0 ; 
// }































#include<stdio.h>
#include<string.h>

    int main(){
    for(int i = 0 ; i < 4 ; i++){
        for(int j = i ; j <4 ;j++){
            printf("*");
        }
        printf("\n");
    }
return 0 ; 
}