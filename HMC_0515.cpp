/* Chapter 5: Programming Exercise # 15
* The program in Example 5-6 implements the Number Guessing Game.
* However, in that program, the user is given as many tries as needed to guess the correct number.
* Rewrite the program so that the user has no more than 5 tries to guess the correct number.
* Your program should print an appropriate message, such as "You win!" or "You lose!".
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	char ch1;
	int num, guess, count=1;
	bool isGuessed;

	srand(time(0));
	num = rand() % 100;

	isGuessed = false;

	while (!isGuessed)
	{
		cout << "Would you like to begin the game? [Y/N]: ";
		cin >> ch1;
		cout << endl;

		if (ch1 != 'Y')
		{
			isGuessed = true;
		}
		else
			isGuessed = false;

		while ((count <= 5) && (ch1 == 'Y'))
		{

			cout << "Enter an integer greater than or equal to 0 & less than 100: ";
			cin >> guess;
			cout << endl;

			if (guess == num)
			{
				cout << "You guessed the correct number. You Won!" << endl;
				isGuessed = true;
			}
			else if (guess < num && count < 5)
				cout << "Your guess is lower than the number. \n Guess again!" << endl;
			else if (guess > num && count < 5)
				cout << "Your guess is higher than the number. \n Guess again!" << endl;

			count++;
		}

		cout << "Sorry, You Lost :<";
		cout << endl << "Play Again? [Y/N]" << endl;
		cin >> ch1;

		if (ch1 != 'Y')
		{
			isGuessed = true;
		}
		else
			isGuessed = false;
	}
	return 0;
}