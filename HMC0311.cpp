// HMC Programming Exercise Chapter 03 Problem #11.
/* 11. A size of a jumbo candy bar with rectangular shape is l*w*h. Due to rising costs of coca, the volume of the candy bar is to be reduced by p%.
To accomplish this, the management decided to keep the thickness, h, of the candy bar the same, and reduce the length and width by the same amount.
For example, if l=12, w=7, h=3, and p = 10, then the new dimension of the candy bar is 11.39*6.64*3. Write a program to accomplish this.*/


#include <iostream>

using namespace std;

int main()
{
	double l, w, h, p, redCanBar;

	cout << "Let's resize your Jumbo Candy Bar!" << endl;
	cout << "Please enter the Length of the Candy Bar: " << endl;
	cin >> l;
	cin.clear();
	cin.ignore(100, 'n');

	cout << "Please enter the Width of the Candy Bar: " << endl;
	cin >> w;
	cin.clear();
	cin.ignore(100, 'n');

	cout << "Please enter the Height of the Candy Bar: " << endl;
	cin >> h;
	cin.clear();
	cin.ignore(100, 'n');

	cout << "Please enter the Percentage of Reduction (in 00.00% format): " << endl;
	cin >> p;
	cin.clear();
	cin.ignore(100, 'n');

	redCanBar = ((l * w)*(p/100)) * h;

	cout << "Your Candy Bar with the Length of " << l << ", the Width of " << w << ", the Height of " << h << ", and a Reduction of "
		<< p << "%, would equate to the new size of: \n" << redCanBar;


	return 0;
}
