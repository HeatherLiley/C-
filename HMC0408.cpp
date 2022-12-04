// HMC0408.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Write a program that mimics a calculator. 
* The program should take as input 2 integers and the operation to be performed.
* It should then output the numbers, the operator, and the result.
* (For division, if the denominator is zero, output an appropriate message.)
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double num1, num2;
	char equationType;

	cout << fixed << showpoint << setprecision(2);

	cout << "Welcome to C++ Calculator!" << endl
		<< "We are here to solve your basic math equations: Addition, Subtraction, Multiplication, & Division."
		<< endl << "Use the options listed below to tell us what problem you need solved, today!" << endl
		<< "A or a (Addition), " << endl
		<< "S or s (Subtraction), " << endl
		<< "M or m (Multiplication), " << endl
		<< "D or d (Division) " << endl;
	cout << "Enter the type of problem you need solved: ";
	cin >> equationType;
	cout << endl;

	cout << "Enter the 1st Number in your Equation: ";
	cin >> num1;
	cout << endl;
	cout << "Enter the 2nd Number in your Equation: ";
	cin >> num2;
	cout << endl;

	if (!cin)
		cout << "Input error. Please try again." << endl;
	else
	{}

	switch (equationType)
	{
	case 'M':
	case 'm':
		cout << endl << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case 'D':
	case 'd':
		cout << endl << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	case 'A':
	case 'a':
		cout << endl << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case 'S':
	case 's':
		cout << endl << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	}

	return 0;
}