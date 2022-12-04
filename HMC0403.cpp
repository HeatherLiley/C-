// HMC0403.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Write a program that prompts the user to input an integer between 0 and 35.
*	If the number is less than or equal to 9, the program should output the number; 
*	otherwise, it should output A for 10, B for 11, C for 12,..., and z for 35.
*	(Hint: Use the cast operator, static_cast<char> (), for numbers >= 10.)
*/

#include <iostream>

using namespace std;

int main()
{
	int num1;
	char num2;

	cout << "Enter an integer between 0 and 35: ";
	cin >> num1;
	cout << endl;

	switch (num1 < 0)
	{
	case 1:
		cout << "Invalid Integer Entered." << endl;
	case 0:
		break;
	}

	switch (num1 > 35)
	{
	case 1:
		cout << "Invalid Integer Entered." << endl;
	case 0:
		break;
	}

	switch (num1 <= 9 > 0)
	{
	case 1:
		cout << num1 << endl;
		break;
	case 0:
		if (num1 <= 35)
			cout << static_cast<char>(num1 - 10 + 'A') << endl;
		else
			cout << endl;
			break;
	}
	
	return 0;
}