/* Chapter 06, Programming Exercise 12:
* Write a program that takes as input 5 numbers & outputs the mean & standard deviation of the numbers.
* Your program must contain at least the folowwing functions:
*  - A function that calculates and returns the mean, and
*  - A function that calculates the standard deviation.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
#include <float.h>

using namespace std;

int main()
{
	int choice;
	double num1, num2, num3, num4, num5, mean, pow2;
	long double num1Po, num2Po, num3Po, num4Po, num5Po, staDevMean, standardDev;

	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "This program takes 5 numbers provided by the user, and returns the mean or standard deviation of the 5 numbers." << endl;
	cout << "To select the program option you would like to run, enter: " << endl;
	cout << "1: The Mean of the 5 Numbers." << endl;
	cout << "2: The Standard Deviation of the 5 Numbers." << endl;
	cout << "0: End the program." << endl;
	cout << "\nWhat program option do you desire..? " << endl;
	cin >> choice;
	cout << endl;

	while (choice != 0)
	{
		switch (choice)
		{
		case 1:
			cout << "Enter the 1st Number: ";
			cin >> num1;
			cout << "Enter the 2nd Number: ";
			cin >> num2;
			cout << "Enter the 3rd Number: ";
			cin >> num3;
			cout << "Enter the 4th Number: ";
			cin >> num4;
			cout << "Enter the 5th Number: ";
			cin >> num5;
			cout << endl << endl;

			mean = (num1 + num2 + num3 + num4 + num5) / 5;

			cout << "The equation to finding the mean is: "
				<< num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " divided by 5 ";
			cout << "\nTherefore, the Mean is " << mean << endl << endl;
			break;

		case 2:
			cout << "Enter the 1st Number: ";
			cin >> num1;
			cout << "Enter the 2nd Number: ";
			cin >> num2;
			cout << "Enter the 3rd Number: ";
			cin >> num3;
			cout << "Enter the 4th Number: ";
			cin >> num4;
			cout << "Enter the 5th Number: ";
			cin >> num5;
			cout << endl << endl;

			mean = (num1 + num2 + num3 + num4 + num5) / 5;

			cout << "To find the Standard Deviation you must take: " << endl;
			cout <<"(" << num1 << " - the mean) ^ 2 + (" << num2
				<< " - the mean)^2\n+ (" << num3 << " - the mean)^2 + (" << num4 << " - the mean^2)\n+ ("
				<< num5 << " - the mean^2)";

			num1 = num1 - mean;
			num2 = num2 - mean;
			num3 = num3 - mean;
			pow2 = pow(mean, 2);
			
			num1Po = pow(num1, 2);
			num2Po = pow(num2, 2);
			num3Po = pow(num3, 2);
			num4Po = num4 - pow2;
			num5Po = num5 - pow2;

			staDevMean = (num1Po + num2Po + num3Po + num4Po + num5Po) / 5;

			standardDev = sqrt(staDevMean);


			if (staDevMean <= 0)
			{
				cout << endl << endl;
				cout << "The Starndard Deviation resulted in a non-positive, therefore it is imaginary.\n\n";
				break;
			}
			else
				cout << endl;
				cout << "\nTherefore, the Standard Deviation is " << standardDev << endl;
			
			cout << endl;
			break;

		default:
			cout << "\nYou have entered an invalid response. Please try again..." << endl;
			cout << endl << endl;

		}

		cout << "This program takes 5 numbers provided by the user, and returns the mean or standard deviation of the 5 numbers." << endl;
		cout << "To select the program option you would like to run, enter: " << endl;
		cout << "1: The Mean of the 5 Numbers." << endl;
		cout << "2: The Standard Deviation of the 5 Numbers." << endl;
		cout << "0: End the program." << endl;
		cout << "\nWhat program option do you desire..? " << endl;
		cin >> choice;
		cout << endl << endl;

	}

	return 0;
}