#include<stdio.h>
#include<string.h>

void countstr(){

}
    int main(){
    char ch[100]  , str[100] , arr;
    int i , j , count , max = 0; 
    puts("Enter the string : ");
    gets(ch)  ;

    strcpy(str , ch) ; 
    for(i = 0 ; ch[i]!='\0' ; i++){ 
        count = 0 ; 
        for(j = i ; str[j]!='\0' ; j++){
            if(ch[i]==str[j]){
                count++ ; 
                if(count> max){
                    max = count ; 
                    arr = ch[i] ; 
                }
            }
        }
    }
    printf("%c is having highest frequency of %d." , arr , max);

return 0 ; 
}
