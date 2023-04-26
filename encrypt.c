// #include<stdio.h>
// #include<string.h>

// void encrypt(char str[])
// {
//     char *ptr = str;
//     while(*ptr!='\0')
//     {
//         *ptr = *ptr + 5;
//         ptr++;
//     }
// }
//     int main(){
//     char str[] = "Mustu Bhai";
//     encrypt(str);
//     printf("The encrypted string is %s" , str);
// return 0 ; 
// }
#include<stdio.h>
#include<string.h>
void encrypt(char str[]){
    char *ptr = str;
    while(*ptr!='\0'){
        *ptr = *ptr + 5;
        ptr++;
    }
}
int main(){
    char str[] = "Mustu Bhai";
    encrypt(str);
    printf("The encrypted string is %s" , str);
    return 0;
}

