#include<stdio.h>
#include<string.h>

    int main(){
    //char name[] = "mustu bhai";
    //printf("%s" , name);

    char name[] = "Mustu bhai";
    int length = 0;
   // printf("enter your name : ");
    // gets(name);
    // puts(name);

    for(int i = 0 ; name[i]!='\0' ; i++){
        length++;
    }
    printf("The length is %d" , length);
    
return 0 ; 
}