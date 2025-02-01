#include<stdio.h>

int main()
{
	int n;
	printf("\t NUMBER GUESSING GAME \n");
	do{
		printf("\nEnter Number: ");
		scanf("%d", &n);
		printf("You Have Entered a Number %d \n", n);
		if(n%2 != 0){
			printf("You Guess The Correct Number \n");
			break;
		}
	}while(1);
	
	printf("Thank You For Playing The Game");
	
	return 0;
}
