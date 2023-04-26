#include<stdio.h>
#include<string.h>

    int main(){

        //length
    // char *str = "Mustu bhai";
    // char str2[45];
    // strcpy(str2 , str);
    // puts(str2);

    //strcat merge two strings
    char str1[] = "Mustu ";
    char str2[] = "Bhai ";
    char str3[] = "welcome";
    strcat(str1 , str2);
    puts(str1);
    strcat(str1 , str3);
    puts(str1);
    //printf("The merged String is %s" , str2);
return 0 ; 
}