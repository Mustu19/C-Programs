#include<stdio.h>
#include<math.h>


    int main(){
    int student , subject;
    printf("Enter the number of student and subject: " );
    scanf("%d %d" ,&student , &subject );
    int marks[student][subject];
    for(int i = 0 ; i<student ; i++)
    {
        for(int j=0; j<subject ; j++)
        {
            printf("Enter marks of Student %d in Subject %d :" , i+1 , j+1);
            scanf("%d" , &marks[i][j]);
        }
    }
    printf("\n\n");
    for(int i = 0 ; i<student ; i++)
    {
        for(int j=0; j<subject ; j++)
        {
            printf("The marks of Student %d in Subject %d  is %d\n:" , i+1 , j+1 , marks[i][j]);
        }
    }
return 0 ; 
}