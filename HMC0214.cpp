// Chapter 02 Exercise 14
// (Hard drive storage capacity) If you buy a 40 GB hard drive, then chances are that the actual storage
// on the hard drive is not 40 GB. This is due to the fact that, typically, a manufacturer uses 1,000 bytes as
// the value of 1K bytes, 1,000 K bytes as the value of 1 MB, 1,000 MB as the value of 1 GB.
// Therefore, a 40 GB hard drive contains 40,000,000,000 bytes. However, in computer memory, as given in
// Table 1-1 (Chapter 1), 1 KB is equal to 1,024 bytes, and so on. So the actual storage ona 40 GB hard drive
// is approximately 37.25 GB. (You might like to read the fine print next time you buy a hard drive.)
// Write a program that prompts the user to enter the size of the hard drive specified by the manufacturer,
// on the hard drive box, and outputs the actual storage capacity of the hard drive.

#include <iostream>																//Line 1
#include <string>																//Line 2

using namespace std;															//Line 3

const double BYTES = 1;															//Line 4
const double KB = 1024;															//Line 5
const double MB = 1048576;														//Line 6
const double GB = 1073741824;													//Line 7

int main()																		//Line 8
{																				//Line 9
	double kb;																	//Line 10
	double mb;																	//Line 11
	double gb;																	//Line 12
	double bytes;																//Line 13
	double capacity;															//Line 14
	double storage;																//Line 15

	cout << "Enter the size of the hard-drive specified by the manufacturer on the hard-drive box, using only integars."
		 << endl;																//Line 16
	cout << "KB?: ";															//Line 17
	cin >> kb;																	//Line 18
	cout << endl;																//Line 19
	cout << "MB?: ";															//Line 20
	cin >> mb;																	//Line 21
	cout << endl;																//Line 22
	cout << "GB?: ";															//Line 23
	cin >> gb;																	//Line 24
	cout << endl;																//Line 25

	bytes = kb * 1000;															//Line 26
	kb = mb * 1000;																//Line 27
	mb = gb * 1000;																//Line 28

	capacity = ((BYTES * bytes) + (KB * kb) + (MB * mb) + (GB * gb) * BYTES);	//Line 29

	storage = (capacity / 1073741824);											//Line 30

	cout << "Your actual storage capacity is: " << storage << " GB."
	     << endl;																//Line 31


	return 0;																	//Line 32
}																				//Line 33
