#include<stdio.h>
#include<math.h>

int main() 
{
    int max = 0,player,x;
	printf("\n\nEnter number of players : ");
	scanf("%d",&player);
	for(int i=1;i<=player;i++)
	{
		printf("Enter x-%d : ",i);
		scanf("%d",&x);

		if(max < x)
			max = x;
	}
	printf("\n max = %d",max);
	return 0;
}
