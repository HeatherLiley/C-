// HMC Programming Exercise Extra-Credit: Chapter 03 Problem Number #5
/* Three employees in a company are up for a special pay increase. You are given a file, say Ch3_Ex5Data.txt, with the following data:
Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1
Each input line consists of an employee's last name, first name, current salary, and percent pay increase. For example, in the first
input line, the last name of the employee is Miller, the first name is Andrew, the current salary is 65789.87, and the pay increase is 5%.
Write a program that reads data from the specified file and stores the output in the file Ch3_Ex5Output.dat. For each employee, the data must be
output in the following form: firstName lastName updated Salary. Format the output of decimal numbers to two deicmal places.*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream inData;
	ofstream outData;

	double curSal, payIn, newSal;

	string firstName, lastName;

	inData.open("Ch3_Ex5Data.txt");
	outData.open("Ch3_Ex5Output.dat");

	outData << fixed << showpoint << setprecision(2);
	
	cout << "Processing Data...";

	inData >> lastName >> firstName;
	outData << "Employee Name: " << firstName << " " << lastName << endl;

	inData >> curSal >> payIn;
	outData << "Current Salary: $" << curSal << " & Pay Increase Percentage: " << payIn << endl;

	newSal = (curSal * (payIn / 100))+curSal;

	outData << "New Salary: $" << newSal << endl;

	inData >> lastName >> firstName;
	outData << "\nEmployee Name: " << firstName << " " << lastName << endl;

	inData >> curSal >> payIn;
	outData << "Current Salary: $" << curSal << " & Pay Increase Percentage: " << payIn << endl;

	newSal = (curSal * (payIn / 100)) + curSal;

	outData << "New Salary: $" << newSal << endl;

	inData >> lastName >> firstName;
	outData << "\nEmployee Name: " << firstName << " " << lastName << endl;

	inData >> curSal >> payIn;
	outData << "Current Salary: $" << curSal << " & Pay Increase Percentage: " << payIn << endl;

	newSal = (curSal * (payIn / 100)) + curSal;

	outData << "New Salary: $" << newSal << endl;

	inData.close();
	outData.close();


	return 0;
}