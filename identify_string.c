#include<stdio.h>
#include<string.h>
#include<math.h>

    int main(){
    char str;
    char str2[] = "mustafa";
    printf("Enter any character :");
    scanf("%c" , &str);

    if(str>='a' && str<='z'){
        printf("lower case");
    }
    
    else if(str>='A' && str<='Z'){
        printf("higher case");
    }
    else if(str>=48 && str<=57){
        printf("digit");
    }
    else{
        printf("special character");

    }
    printf("\nThe length of string is %s ." , strrev(str2));
return 0 ; 
}