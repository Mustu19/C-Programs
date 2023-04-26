// #include<stdio.h>
// #include<string.h>

// struct bankAccount{
//     char name[50];
//     int accNum;
//     int balance;
//     char bankName[30];
// };
//     int main(){

//         struct bankAccount bank;
//         // printf("Enter name , account number , balance and bank name of the customer : ");

//         // gets(bank.name);
//         // scanf("%d \n%d " , &bank.accNum , &bank.balance);
//         // gets(bank.bankName);

// printf("%d" , sizeof(bank.bankName));
    
// return 0 ; 
// }


#include<stdio.h>
#include<string.h>

struct student{

    int rno;
    char name[40] ; 
    int sub[3] ; 
    int total ;
};
    int main(){
        struct student st[3] ;
        int i , j ;
        for ( i = 0; i < 3; i++)
        {
            printf("Enter Student %d name : " , i+1);
            scanf("%s" , st[i].name);
            printf("Enter Student Roll no : ");
            scanf("%d" , &st[i].rno);
            st[i].total = 0 ; 
            printf("Enter Marks of 3 Subjects of Student %d :  " , i+1);
            for ( j = 0; j < 3; j++)
            {
                scanf("%d" , &st[i].sub[j]);
                st[i].total += st[i].sub[j] ; 
            }
        }
        for ( i = 0; i < 3; i++){
                printf("\nTotal Marks obtained by Student %d is %d." , i+1 , st[i].total);
        }    
return 0 ; 
}