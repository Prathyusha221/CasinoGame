// Casino game
#include<bits/stdc++.h>

int main()
{
	char name[50];
	char s[4];
	srand(time(0));
	
	int a,dep_amt,bet_amt,num;
	
	
	for(int i=0;i<50;i++)
	{
		printf("_");
	}
	printf("\n\n");
	for(int i=0;i<15;i++)
	{
		printf(" ");
	}
	printf("Casino Game\n\n");
    for(int i=0;i<50;i++)
	{
		printf("_");
	}
	printf("\nEnter your name:");
	scanf("%s", name);
	printf("\nEnter deposit amount to play game: $");
	scanf("%d", &dep_amt);
	while(1)
	{
		a=rand()%10+1;
		for(int i=0;i<50;i++)
    	{
	    	printf("-");
	    }
	    printf("\n\n");
	    for(int i=0;i<15;i++)
	    {
		    printf(" ");
	    }
		printf("RULES OF THE GAME\n\n");
		for(int i=0;i<50;i++)
	    {
	    	printf("-");
	    }
		printf("\n1. Choose any number between 1 to 10");
		printf("\n2. If you win you will get 10 times of money you bet");
		printf("\n3. If you bet on wrong number you will lose your betting amount\n\n");
		for(int i=0;i<50;i++)
    	{
	    	printf("_");
	    }
		printf("\nYour current balance is $ %d \n%s, Enter money to bet: $ ", dep_amt, name);
		scanf("%d", &bet_amt);
		printf("\nGuess your number to bet between 1 to 10: ");
		scanf("%d", &num);
		if(num==a)
		{
			printf("\nCongratulations! You won $ %d", 10*bet_amt);
			dep_amt = dep_amt + (9*bet_amt);
		}
		else
		{
			printf("\nBad luck this time!! You lost $ %d", bet_amt);
			printf("\nThe winning number was: %d\n", a);
			dep_amt=dep_amt-bet_amt;
		}
		printf("\n%s, You have $ %d", name, dep_amt);
		printf("\n-->Do you want to play again (y/n)?\n\n");
	    
	 	scanf("%s", s);
		if(!strcmp(s,"n"))
		{
			break;
		}
	}
	return 0;
}