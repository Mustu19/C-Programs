#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
    FILE *ptr;
    char ch[50];
    ptr = fopen("file.txt" , "r");
    if(ptr == NULL){
        printf("File cant be opened.");
        exit(0);
    }

    if(fgets(ch , 50 , ptr)!=NULL){
        puts(ch);
    }
    // do{
    //     ch = fgetc(ptr);
    //     printf("%c" , ch);
    // }while(ch!=EOF);
    fclose(ptr);

return 0 ; 
}