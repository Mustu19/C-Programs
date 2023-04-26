#include<stdio.h>
#include<math.h>

struct marks
{
    int m[2];
};
struct student
{
    int id ;
    char str1[50] , str2[50] ; 
    struct marks mar;
};


    int main(){
    // char str , ans;
    // printf("enter any character:");
    // scanf("%c" , &str);
    // printf("\nThe ascii value of the given character is %d" , str);
    // if(str>='A' && str<='Z')
    // {
    //     ans = str + 32;
    //     printf("\nthe letter is %c" , ans);
    // }

    // struct student stu[2];
    // int i , j ;
    // for (i = 0; i < 2; i++)
    // {
    //     printf("Enter the id no , name of 2 subjects , marks of 2 subjects of student %d: " , i+1);
    //     scanf("%d %s %s" , &stu[i].id , &stu[i].str1 , &stu[i].str2);
    //     for (j = 0; j < 2; j++)
    //     {
    //         scanf("%d" , &stu[i].mar.m[j]);
    //     }
        
    // }

    int price_ ; 
    price_ = 56 ; 
    printf("%d" , price_);
    

return 0 ; 
}   