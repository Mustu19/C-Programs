// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a,b,c , choice;
//     start:
//     scanf("%d %d %d", &a,&b,&c);
//     printf("multiplication is %d", (a*b*c));
//     printf("\npress 0 to continue\n");
//     scanf("%d", &choice);
//     if(choice==0)
//     {
//         goto start;
//     }

//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
//     int main(){
//         int i  = 13;
//         switch(i){
//             case 0:
//                 i = i+2;
//             case 1:
//                 printf("dishoom");
//             case 2:
//                 printf("execute");
//             default :   
//                 i = i+4;
//                 break;
//         }
//         printf("%d" ,i);
//         return 0 ; 
// }


#include<stdio.h>
#include<string.h>

    int main(){
    int a, b;
    a = b = 4;
    b=a++;
    printf("%d %d\n", a,b); // b = 4  , a = 5
    printf("%d %d %d %d",a++,--b,++a,b--);

return 0 ; 
}