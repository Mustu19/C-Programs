#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int snakeWaterGun(char you , char comp){

    // Condition for draw
    // cases covered are ss ww gg
    if(comp == you){
        return 0;       
    }

    // Non-draw Condition
    // Cases covered : 
    // cases sw sg wg  
    //       ws gs gw                         

    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    if(you=='s' && comp=='g')
    {
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 0 ;
    }
    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }
 
}
    int main(){
    char you , comp;
    srand(time(0));
    int number  = rand()%100 + 1 ;
    if(number < 33){
        comp = 's';
    }
    else if (number > 33 && number < 66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter 's' for snake , 'w' for water , 'g' for gun :" );
    scanf("%c" , &you);
    printf("\nYou have choosen %c and Computer has chosen %c" , you ,  comp);
    int result = snakeWaterGun(you , comp);

    if(result==0){
        printf("\nDRAW GAME");
    }
    else if(result==1){
        printf("\nYOU WIN");
    }
    else{
        printf("\nYOU LOSE");
    }
return 0 ; 
}