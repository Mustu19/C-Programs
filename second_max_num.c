#include<stdio.h>
#include<string.h>

    int main(){
    int str[5] , max , second_max;

    for(int i = 0 ; i < 5 ; i++){
        printf("a[%d] : " , i);
        scanf("%d", &str[i]);
    }

    if(str[0] > str[1]){
        max = str[0];
        second_max = str[1];
    }
    else{
        max = str[1];
        second_max = str[0];
    }

    for(int j = 2 ; j < 5 ; j++){
        if(max < str[j]){
            second_max = max;
            max = str[j];
        }
        else if(second_max < str[j]){
            second_max = str[j];
        }
    }
    printf("\nthe maximum value is %d and second maximum is %d" , max , second_max);

return 0 ; 
}