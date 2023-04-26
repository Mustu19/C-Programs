// #include<stdio.h>
// #include<string.h>

//     int main(){
//     FILE *ptr;
//     int num , num2 , num3;
//     ptr = fopen("Mustu.txt" , "r");
//     fscanf(ptr , "%d" , &num);
//     fscanf(ptr , "%d" , &num2);
//     fscanf(ptr , "%d" , &num3);
//     fclose(ptr);
//     printf("The value of num is %d\n" , num);
//     printf("The value of num2 is %d\n" , num2);
//     printf("The value of num3 is %d\n" , num3);

    
// return 0 ; 
// }

#include<stdio.h>
#include<string.h>

    int main(){
        FILE *ptr;
        int num , num1 , num2;
        ptr = fopen("mustu.txt" , "r");
        fscanf(ptr , "%d", &num);
        fscanf(ptr , "%d", &num1);
        fscanf(ptr , "%d", &num2);

        printf("\nthe values are %d and %d and %d" , num , num1 , num2);
        fclose(ptr);
return 0 ; 
}