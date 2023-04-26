#include<stdio.h>
#include<string.h>
#include<math.h>

    int main(){
    int num , fact = 1;
    printf("ENter any number :");
    scanf("%d" , &num);

    for(int i =1 ; i<=num ; i++){
        fact = fact * i;
    }
    printf("THe factorial is  %d." , fact);
return 0 ; 
}