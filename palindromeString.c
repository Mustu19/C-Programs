#include<stdio.h>
#include<string.h>

    int main(){
    char str[100]  , i  ,length , flag=0; 
    puts("Enter any string : ");
    gets(str);
    length = strlen(str);
    for(i=0; i<length ; i++){
        if(str[i] == str[length-1-i]){
            flag++;
        }
    }
    if(flag == length){
        printf("Palindrome");
    }
return 0 ; 
}