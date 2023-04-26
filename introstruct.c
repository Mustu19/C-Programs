#include<stdio.h>
#include<string.h>

struct employee{
    int ans ;
    float b;
    char c;
    char str[10];
};
    int main(){
        struct employee e1;
        //e1.ans = 55;
        printf("Enter the answer of first employee : ");
        scanf("%d" , &e1.ans);
        e1.b = 45.32;
        e1.c = 'm';

        // struct ma array define karine access kevi rite karvu ee imp che.
        strcpy(e1.str , "Mustu");

        printf("%d" , e1.ans);
        printf("\n%f" , e1.b);
        printf("\n%c" , e1.c);
        printf("\n%s" , e1.str);

        struct employee e2;
        e2.ans = 100;
        e2.b = 100.23;
        e2.c = 'a';

        strcpy(e2.str , "kapasi");

        printf("\n\n%d" ,e2.ans);
        printf("\n%f" ,e2.b);
        printf("\n%c" ,e2.c);
        printf("\n%s" ,e2.str);
        
    
return 0 ; 
}