// Casino game
#include<bits/stdc++.h>
using namespace std;

void start(){
        for(int i=0;i<50;i++){
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
    }

class casino{
    string name;
	int a,dep_amt,bet_amt,num;

    public:
    casino(){
        cout<<"\nEnter your name:";
	    cin>>name;
	    cout<<"\nEnter deposit amount to play game: $";
	    cin>>dep_amt;
    }

    void rules(){
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
    }

    void game(){
        a=rand()%10+1;
        cout<<"\nYour current balance is $ "<<dep_amt<<"\n"<<name<<", Enter money to bet: $ ";
		cin>>bet_amt;
		cout<<"\nGuess your number to bet between 1 to 10: ";
		cin>>num;
		if(num==a)
		{
			cout<<"\nCongratulations! You won $ "<<10*bet_amt;
			dep_amt = dep_amt + (9*bet_amt);
		}
		else
		{
			cout<<"\nBad luck this time!! You lost $ "<<bet_amt;
			cout<<"\nThe winning number was: "<<a<<endl;
			dep_amt=dep_amt-bet_amt;
		}
    }

    void display_bal(){
        cout<<"\n"<<name<<", You have $ "<<dep_amt<<endl;
    }
    
};

int main()
{	
    srand(time(0));
    start();
	casino c;
	
	while(1)
	{
		c.rules();
	    c.game();
		c.display_bal();
		cout<<"\n-->Do you want to play again (y/n)?\n\n";
	    string s;
	 	cin>>s;
		if(s=="n")
		{
			break;
		}
	}
	return 0;
}
