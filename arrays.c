#include<stdio.h>

    int main(){
    // int marks[5];

    // for(int i = 0 ; i < 5 ; i++)
    // {
    //     printf("marks[%d] : " , i);
    //     scanf("%d" , &marks[i]);
    // }

    // int marks[5];
    // for(int i = 0 ; i < 5 ; i++)
    // {
    //     printf("marks[%d] :" , i+1);
    //     scanf("%d" , &marks[i]);
    // }
    int a[] =  {20 , 30 , 40};
    // if 1 integer  = 4 types
    // this will reserve your 4 x 3 = 12 bytes of memory but in the interviewer
    // computer architecture the bit depends(3n) 
    for(int i = 0 ; i<3 ; i++)
    {
        printf("\nThe value of a[%d] is %u" , i+1 , &a[i]);
    }


return 0 ; 
}