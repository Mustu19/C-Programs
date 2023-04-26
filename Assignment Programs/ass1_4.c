#include<stdio.h>
#include<string.h>

    int main(){
    char str;
    printf("Enter any character : ");
    scanf("%c" , &str);

    if(str>=65 && str<=90){
        printf("Capital Letter");
    }
    else if(str>=97 && str<=122){
        printf("Small Letter");
    }
    else if(str>=48 && str<=57){
        printf("Digit");
    }
    else{
        printf("Special Symbol");
    }
return 0 ; 
}