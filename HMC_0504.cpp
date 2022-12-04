/*HMC Chapter 5, Programming Exercise 4
* Write a program that prompts the user to enter a telephone number
* expressed in letters & outputs the corresponding telephone number
* in digits. If the user enters more than 7 letters, then process
* only the first 7 letters. Also output the - (hyphen) after the 3rd
* digit. Allow the user to use both uppercase & lowercase letters as
* well as spaces between words. Moreover, your program should process
* as many telephone numbers as the user wants.*/

#include <iostream>
#include <string>

using namespace std;

const string SENTINEL = "N";

int main()
{
	string userInput, end;
	int num1, num2, num3, num4, num5, num6, num7, num8, digit1,
		digit2, digit3, digit4, digit5, digit6, digit7, digit8,
		counter = 0, i;

	cout << "This Program Takes an Alphabetic Phrase & Converts It Into a Numeric Phone Number." << endl;

	cout << "Would You Like to Run the Program? (Y/N): ";
	cin >> end;
	cout << endl;

	while (end != SENTINEL)
	{
		cout << "Enter an Alphabetic Phone Number: ";
		cin >> userInput;
		cout << endl;
		cout << "The number you entered is: " << userInput << endl;

		
		num1 = static_cast<int>(userInput[0]);
		num2 = static_cast<int>(userInput[1]);
		num3 = static_cast<int>(userInput[2]);
		num4 = static_cast<int>(userInput[3]);
		num5 = static_cast<int>(userInput[4]);
		num6 = static_cast<int>(userInput[5]);
		num7 = static_cast<int>(userInput[6]);
		num8 = static_cast<int>(userInput[7]);

		num1 = toupper(num1);
		num2 = toupper(num2);
		num3 = toupper(num3);
		num4 = toupper(num4);
		num5 = toupper(num5);
		num6 = toupper(num6);
		num7 = toupper(num7);
		num8 = toupper(num8);

		i = 91;
		
		cout << "Your Numeric Phone Number is: ";

		while (i == 91)
		{
			switch (num1 == 1)
			{
			case true:
				cout << "*";
				break;
			}
			switch ((num1 >= 65) && (num1 < 68))
			{
			case true:
				digit1 = 2;
				cout << digit1;
				break;
			}
			switch ((num1 >= 68) && (num1 < 71))
			{
			case true:
				digit1 = 3;
				cout << digit1;
				break;
			}
			switch ((num1 >= 71) && (num1 < 74))
			{
			case true:
				digit1 = 4;
				cout << digit1;
				break;
			}
			switch ((num1 >= 74) && (num1 < 77))
			{
			case true:
				digit1 = 5;
				cout << digit1;
				break;
			}
			switch ((num1 >= 77) && (num1 < 80))
			{
			case true:
				digit1 = 6;
				cout << digit1;
				break;
			}
			switch ((num1 >= 80) && (num1 < 84))
			{
			case true:
				digit1 = 7;
				cout << digit1;
				break;
			}
			switch ((num1 >= 84) && (num1 < 87))
			{
			case true:
				digit1 = 8;
				cout << digit1;
				break;
			}
			switch ((num1 >= 87) && (num1 < 91))
			{
			case true:
				digit1 = 9;
				cout << digit1;
				break;
			}
			switch (num2 == 1)
			{
			case true:
				cout << "*";
				break;
			}
			switch ((num2 >= 65) && (num2 < 68))
			{
			case true:
				digit2 = 2;
				cout << digit2;
				break;
			}
			switch ((num2 >= 68) && (num2 < 71))
			{
			case true:
				digit2 = 3;
				cout << digit2;
				break;
			}
			switch ((num2 >= 71) && (num2 < 74))
			{
			case true:
				digit2 = 4;
				cout << digit2;
				break;
			}
			switch ((num2 >= 74) && (num2 < 77))
			{
			case true:
				digit2 = 5;
				cout << digit2;
				break;
			}
			switch ((num2 >= 77) && (num2 < 80))
			{
			case true:
				digit2 = 6;
				cout << digit2;
				break;
			}
			switch ((num2 >= 80) && (num2 < 84))
			{
			case true:
				digit2 = 7;
				cout << digit2;
				break;
			}
			switch ((num2 >= 84) && (num2 < 87))
			{
			case true:
				digit2 = 8;
				cout << digit2;
				break;
			}
			switch ((num2 >= 87) && (num2 < 91))
			{
			case true:
				digit2 = 9;
				cout << digit2;
				break;
			}
			switch (num3 == 1)
			{
			case true:
				cout << "*";
				break;
			}
			switch ((num3 >= 65) && (num3 < 68))
			{
			case true:
				digit3 = 2;
				cout << digit3;
				break;
			}
			switch ((num3 >= 68) && (num3 < 71))
			{
			case true:
				digit3 = 3;
				cout << digit3;
				break;
			}
			switch ((num3 >= 71) && (num3 < 74))
			{
			case true:
				digit3 = 4;
				cout << digit3;
				break;
			}
			switch ((num3 >= 74) && (num3 < 77))
			{
			case true:
				digit3 = 5;
				cout << digit3;
				break;
			}
			switch ((num3 >= 77) && (num3 < 80))
			{
			case true:
				digit3 = 6;
				cout << digit3;
				break;
			}
			switch ((num3 >= 80) && (num3 < 84))
			{
			case true:
				digit3 = 7;
				cout << digit3;
				break;
			}
			switch ((num3 >= 84) && (num3 < 87))
			{
			case true:
				digit3 = 8;
				cout << digit3;
				break;
			}
			switch ((num3 >= 87) && (num3 < 91))
			{
			case true:
				digit3 = 9;
				cout << digit3;
				break;
			}

			if (num4 == 45)
			{
				cout << " - ";
			}
			else
			{
				switch (num4 != 45)
				{
				case true:
					cout << " - ";
					break;
				}
			}
			
			switch (num4 == 1)
			{
			case true:
				cout << "*";
				break;
			}
			switch ((num4 >= 65) && (num4 < 68))
			{
			case true:
				digit4 = 2;
				cout << digit4;
				break;
			}
			switch ((num4 >= 68) && (num4 < 71))
			{
			case true:
				digit4 = 3;
				cout << digit4;
				break;
			}
			switch ((num4 >= 71) && (num4 < 74))
			{
			case true:
				digit4 = 4;
				cout << digit4;
				break;
			}
			switch ((num4 >= 74) && (num4 < 77))
			{
			case true:
				digit4 = 5;
				cout << digit4;
				break;
			}
			switch ((num4 >= 77) && (num4 < 80))
			{
			case true:
				digit4 = 6;
				cout << digit4;
				break;
			}
			switch ((num4 >= 80) && (num4 < 84))
			{
			case true:
				digit4 = 7;
				cout << digit4;
				break;
			}
			switch ((num4 >= 84) && (num4 < 87))
			{
			case true:
				digit4 = 8;
				cout << digit4;
				break;
			}
			switch ((num4 >= 87) && (num4 < 91))
			{
			case true:
				digit4 = 9;
				cout << digit4;
				break;
			}
			switch (num5 == 1)
			{
			case true:
				cout << "*";
				break;
			}
			switch ((num5 >= 65) && (num5 < 68))
			{
			case true:
				digit5 = 2;
				cout << digit5;
				break;
			}
			switch ((num5 >= 68) && (num5 < 71))
			{
			case true:
				digit5 = 3;
				cout << digit5;
				break;
			}
			switch ((num5 >= 71) && (num5 < 74))
			{
			case true:
				digit5 = 4;
				cout << digit5;
				break;
			}
			switch ((num5 >= 74) && (num5 < 77))
			{
			case true:
				digit5 = 5;
				cout << digit5;
				break;
			}
			switch ((num5 >= 77) && (num5 < 80))
			{
			case true:
				digit5 = 6;
				cout << digit5;
				break;
			}
			switch ((num5 >= 80) && (num5 < 84))
			{
			case true:
				digit5 = 7;
				cout << digit5;
				break;
			}
			switch ((num5 >= 84) && (num5 < 87))
			{
			case true:
				digit5 = 8;
				cout << digit5;
				break;
			}
			switch ((num5 >= 87) && (num5 < 91))
			{
			case true:
				digit5 = 9;
				cout << digit5;
				break;
			}
			switch (num6 == 1)
			{
			case true:
				cout << "*";
				break;
			}
			switch ((num6 >= 65) & (num6 < 68))
			{
			case true:
				digit6 = 2;
				cout << digit6;
				break;
			}

			switch ((num6 >= 68) & (num6 < 71))
			{
			case true:
				digit6 = 3;
				cout << digit6;
				break;
			}
			switch ((num6 >= 71) & (num6 < 74))
			{
			case true:
				digit6 = 4;
				cout << digit6;
				break;
			}
			switch ((num6 >= 74) & (num6 < 77))
			{
			case true:
				digit6 = 5;
				cout << digit6;
				break;
			}
			switch ((num6 >= 77) & (num6 < 80))
			{
			case true:
				digit6 = 6;
				cout << digit6;
				break;
			}
			switch ((num6 >= 80) & (num6 < 84))
			{
			case true:
				digit6 = 7;
				cout << digit6;
				break;
			}
			switch ((num6 >= 84) & (num6 < 87))
			{
			case true:
				digit6 = 8;
				cout << digit6;
				break;
			}
			switch ((num6 >= 87) & (num6 < 91))
			{
			case true:
				digit6 = 9;
				cout << digit6;
				break;
			}
			switch (num7 == 1)
			{
			case true:
				cout << "*";
				break;
			}
			switch ((num7 >= 65) & (num7 < 68))
			{
			case true:
				digit7 = 2;
				cout << digit7;
				break;
			}
			switch ((num7 >= 68) & (num7 < 71))
			{
			case true:
				digit7 = 3;
				cout << digit7;
				break;
			}
			switch ((num7 >= 71) & (num7 < 74))
			{
			case true:
				digit7 = 4;
				cout << digit7;
				break;
			}
			switch ((num7 >= 74) & (num7 < 77))
			{
			case true:
				digit7 = 5;
				cout << digit7;
				break;
			}
			switch ((num7 >= 77) & (num7 < 80))
			{
			case true:
				digit7 = 6;
				cout << digit7;
				break;
			}
			switch ((num7 >= 80) & (num7 < 84))
			{
			case true:
				digit7 = 7;
				cout << digit7;
				break;
			}
			switch ((num7 >= 84) & (num7 < 87))
			{
			case true:
				digit7 = 8;
				cout << digit7;
				break;
			}
			switch ((num7 >= 87) & (num7 < 91))
			{
			case true:
				digit7 = 9;
				cout << digit7;
				break;
			}
			switch ((num8 == 1) && (num4 == 45))
			{
			case true:
				cout << "*";
				break;
			}
			switch (((num8 >= 65) && (num8 < 68)) && (num4 == 45))
			{
			case true:
				digit8 = 2;
				cout << digit8;
				break;
			}
			switch (((num8 >= 68) && (num8 < 71)) && (num4 == 45))
			{
			case true:
				digit8 = 3;
				cout << digit8;
				break;
			}
			switch (((num8 >= 71) && (num8 < 74)) && (num4 == 45))
			{
			case true:
				digit8 = 4;
				cout << digit8;
				break;
			}
			switch (((num8 >= 74) && (num8 < 77)) && (num4 == 45))
			{
			case true:
				digit8 = 5;
				cout << digit8;
				break;
			}
			switch (((num8 >= 77) && (num8 < 80)) && (num4 == 45))
			{
			case true:
				digit8 = 6;
				cout << digit8;
				break;
			}
			switch (((num8 >= 80) && (num8 < 84)) && (num4 == 45))
			{
			case true:
				digit8 = 7;
				cout << digit8;
				break;
			}
			switch (((num8 >= 84) && (num8 < 87)) && (num4 == 45))
			{
			case true:
				digit8 = 8;
				cout << digit8;
				break;
			}
			switch (((num8 >= 87) && (num8 < 91)) && (num4 == 45))
			{
			case true:
				digit8 = 9;
				cout << digit8;
				break;
			}

			i++;
		}

		cout << endl << "Would you like to run the program, again? (Y/N): ";
		cin >> end;
		cout << endl;
	}

	return 0;
}