#include<stdio.h>
#include<string.h>

    int main(){
    int str[5] , min , second_min;

    for(int i = 0 ; i < 5 ; i++){
        printf("a[%d] : " , i);
        scanf("%d", &str[i]);
    }

    if(str[0] < str[1]){
        min = str[0];
        second_min = str[1];
    }
    else{
        min = str[1];
        second_min = str[0];
    }

    for(int j = 2 ; j < 5 ; j++){
        if(min > str[j]){
            second_min = min;
            min = str[j];
        }
        else if(second_min < str[j]){
            second_min = str[j];
        }
    }
    printf("\nthe minimum value is %d and second minimum is %d" , min , second_min);

return 0 ; 
}