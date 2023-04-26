#include<stdio.h>
#include<string.h>

    int main(){
    char ch[100];
     int i ; 
    puts("Enter the string : ");
    gets(ch)  ;
     for(i = 0 ; ch[i]!='\0' ; i++){ 
         if(ch[i]>='A' && ch[i]<='Z'){
             if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'){
                 ch[i] = ch[i] + 32 ; 
                 printf("%c" , ch[i]);
             }
             else{
                printf("%c" , ch[i]);
             }
             
         }
         else if(ch[i]>='a' && ch[i]<='z'){
            if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
                 ch[i] = ch[i] - 32 ; 
                 printf("%c" , ch[i]);
             }
             else{
                printf("%c" , ch[i]);
             }
         }
         else
         {
             printf(" ");
         }
     }
     
return 0 ; 
}