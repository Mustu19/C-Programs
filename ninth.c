#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main()
{
    int number , guess , nguess = 0  , player , max=0;
    printf("\nWelcome to the Random Number Guessing Game");
    printf("\n\nHow many players would like to play ?  ");
    scanf("%d" , &player);
    

    for(int i=1 ; i <= player ; i++)
    {
        srand(time(0));
        number = rand()%100 + 1;
        printf("\n\nNow the Player %d will guess the number" , i);
            do
        {
            /* code */

            printf("\n\nchoose any number between 1 to 100 :  ");
            scanf("%d" , &guess);

            if(guess>number)
            {
                printf("\nLower Number");
            }
            else if(guess<number)
            {
                printf("\nHigher Number");
            }
             else
            {
                printf("\n\nguessed correctly in %d attempts" , nguess);
            }
            nguess++;
        }while (guess!=number);

        printf("\n\nPlayer %d has guessed it in %d attempts" , i , nguess);

     //   if(nguess > max){
       //     max = nguess;
        //}    
     }

     //printf("\n\nMaximum attempts is %d" , max);
    return 0 ;    
}