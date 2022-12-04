// HMC_Midterm_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* A palindrome is a number or a text phase that reads the same backward as forward. 
* For example each of the following 5-digit integers is a palindrome: 12321, 55555, 45554, and 11611. 
* Write a program that reads the 5-digit integer and determines whether it’s a palindrome.
*/

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	string userInput, reverseStr;

	cout << "_|     Welcome to Palindrome Verifier     |_" << endl
		 << endl << "Please type your inquiry: ";
	cin  >> userInput;
	cout << endl;
	
	cout << "The definition of a palindrome is: " << endl << endl
		<< "A word, phrase, or sequence that reads the same backward as forward."
		<< endl << endl;

	for_each(userInput.begin(), userInput.end(), [](char & c) {c = :: tolower(c);});

	reverseStr = userInput;
	reverse(reverseStr.begin(), reverseStr.end());

	if (userInput == reverseStr)
		cout << "Therefore, '" << userInput << "' reversed is still '" << reverseStr
		<< "'. \n \n Meaning it is indeed a palindrome.";
	else
		cout << "Therefore, '" << userInput << "' reversed is '" << reverseStr
		<< "'. \n \n Meaning it is not a palindrome.";
	
	cout << endl << endl << "_|     Thank you for using Palindrome Verifier!     |_"
		 << endl << endl;

	return 0;
}