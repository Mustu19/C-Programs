// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
//     int main(){
//     FILE *ptr ; 
//     char arr;
//     ptr = fopen("mustu.txt" , "w");
//     fputc('m' , ptr);
//     fputc('k' , ptr);
//     fputc(' ', ptr);
//     fputs("programmer", ptr);
//     fclose(ptr);
    
//     ptr = fopen("mustu.txt" , "r");
//     do{
//         arr = fgetc(ptr);
//         printf("%c" , arr);
//     }while(arr!=EOF);

//     fclose(ptr);
// return 0 ; 
// }

struct address{
    char ad[100];
};
struct student{
    int id , rno;
    struct address address;
};

#include<stdio.h>
#include<string.h>

    int main(){
        struct student st; 
        printf("Enter the  id , plot , address :"); 
        scanf("%d %d %s" , &st.id , &st.rno , st.address.ad); 
        printf("\n\n%d %d %s" , st.id , st.rno , st.address.ad); 
return 0 ; 
}