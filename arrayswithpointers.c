// #include<stdio.h>

//     int main(){
//         int marks[5];
//         int *ptr;
//         //ptr = &marks[0];
//         ptr = marks;
//         for(int i = 0 ; i<5 ; i++)
//         {
//             printf("\nEnter the marks of student %d :" , i+1);
//             scanf("%d" , ptr);
//             ptr++;
//         }
//         for(int i = 0 ; i<5; i++)
//         {
//             printf("\nThe student %d had marks %d." , i+1, marks[i]);
//         }
// return 0 ; 
// }

#include<stdio.h>
#include<string.h>

    int main(){
    int marks[5] ,i ;
    int *ptr;
    ptr = marks;

    for(i= 0 ; i<5 ; i++){
        printf("Enter element %d : " , i);
        scanf("%d" , ptr);
        ptr++;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\nThe element %d is %d . " , i , marks[i]);
    }
    
return 0 ; 
}