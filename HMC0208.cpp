// Chapter 02, Exercise 8

#include <iostream>																			//Line 1
#include <string>																			//Line 2

using namespace std;																		//Line 3

const int SECRET = 11;																		//Line 4
const double RATE = 12.50;																	//Line 5

int main()																					//Line 6
{																							//Line 7
	int num1, num2, newNum;																	//Line 8
	double hoursWorked, wages;																//Line 9
	char first, last;																		//Line 10
	string name;																			//Line 11
	
	cout << "Enter two integers separated by one or more spaces: ";							//Line 12
	cin >> num1 >> num2;																	//Line 13
	cout << endl;																			//Line 14

	newNum = 2 * num1 + num2;																//Line 15

	cout << "The value of your first number is " << num1 << endl;							//Line 16
	cout << "The value of your second number is " << num2 << endl;							//Line 17
	cout << "The value of your first number multiplied by 2, plus your second number is "	
		<< newNum << endl;																	//Line 18
	
	newNum = newNum + SECRET;																//Line 19

	cout << "The last value plus our secret value is " << newNum << endl;					//Line 20

	cout << "Enter a person's last name: ";													//Line 21
	cin >> name;																			//Line 22

	cout << "Enter a decimal number between 0 & 70 for the hours they worked: ";			//Line 23
	cin >> hoursWorked;																		//Line 24

	wages = RATE * hoursWorked;																//Line 25

	cout << "Name: " << name << endl;														//Line 26
	cout << "Pay Rate: $" << RATE << endl;													//Line 27
	cout << "Hours Worked: " << hoursWorked << endl;										//Line 28
	cout << "Salary: $" << wages << endl;													//Line 29


	return 0;																				//Line 30
}																							//Line 31


// m. Write a C++ program that tests each of the C++ statements that you wrote in parts a through l.
//  Place the statements at the appropriate place in the C++ program segment given at the beginning of this problem.
//  Test run your program (twice) on the following input data:
//		a. num1 = 13, num2 = 28; name = "Jacobson"; hoursWorked = 48.30.
//		b. num1 = 32, num2 = 15; name = "Crawford"; hoursWorked = 58.45.