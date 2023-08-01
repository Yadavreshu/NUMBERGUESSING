#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int num = 0;
	int guess = 0;
	int t = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout<<"NUMBER GUESSING GAME"<<endl;
    cout<<"Devloped by Reshu Yadav"<<endl;
	do
	{
		cout<<"Guess a number between 1 and 100 :-  ";
		cin>>guess;
		t++;

	if (guess > num)
			cout << "Too high!\n try again ( ͡❛ ͜ʖ ͡❛)👎\n";
		else if (guess < num)
			cout << "Too low!\n try again ( ͡❛ ͜ʖ ͡❛)👎\n";
		else
			cout << "\nCorrect! You got it in " << t << " guesses!\n";
	} while (guess != num);

	return 0;
}