#include<stdio.h>
#include<string.h>

struct method{
    int code ;
    float rank;
    char str[40];
};
    int main(){
        struct method mustu = {25, 45.45 , "Mustafa Kapasi"};
        printf("Code is : %d\n" , mustu.code );
        printf("Rank is : %.1f\n" , mustu.rank );
        printf("Name is : %s\n\n\n" , mustu.str );

        struct method burhan = {35 ,55.78 , "Burhan Kapasi"};
         printf("Code is : %d\n" , burhan.code );
        printf("Rank is : %.1f\n" , burhan.rank );
        printf("Name is : %s\n\n\n" , burhan.str );

        printf("\n\nthe address of code is %u" , &mustu.code);
        printf("\n\nthe address of rank is %u" , &mustu.rank);
        printf("\n\nthe address of name is %u" , &mustu.str);
return 0 ; 
}