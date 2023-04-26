// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int a , b;
//     printf("hello world");
//     printf("\nEnter the values of a and b: \n");
//     scanf("%d %d\n", &a , &b);
//     printf("The addition of a and b is %d\n",(a+b));
//     return 0;
// }

#include<stdio.h>
#include<string.h>

    int main(){
    int a, b;
    printf("Enter 2 numbers : ");
    scanf("%d %d" , &a , &b);
    for(int i = a ; i <= b ; i++){
        if(i%2==1){
            printf("\n%d" , i);
        }
    }
return 0 ; 
}
