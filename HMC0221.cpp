// Chapter 02 Exercise 21
// Newton's law states that force, F, between two bodies of masses M1 and M2 is given by:
// F=k(m1m2/d2),
// in which k is the gravitational constant and d is the distance between the bodies.
// The value of k is approximately 6.67 x 10^-8 dy. cm2/g2.
// Write a program that prompts the user to input the masses of the bodies and the distance between the bodies.
// The program then outputs the force between the bodies.

#include <iostream>																					//Line 1
#include <string>																					//Line 2

using namespace std;																				//Line 3

// For the life of me, I could not understand how to calculate k, since
// I do not know how to input CGS units. So, I just had the equation for k
// output before it is multiplied by m1*m2/d^2. Since F = k(m1*m2/d^2)

const string K = "6.67 * 10^-8 dyn. * cm^2/g^2 ";													//Line 4

int main()																							//Line 5
{																									//Line 6
	double m1;																						//Line 7
	double m2;																						//Line 8
	double d;																						//Line 9
	double f;																						//Line 10

	cout << "What is the mass of the first body in kg?: ";											//Line 11
	cin >> m1;																						//Line 12
	cout << endl;																					//Line 13

	cout << "What is the mass of the second body in kg? ";											//Line 14
	cin >> m2;																						//Line 15
	cout << endl;																					//Line 16

	cout << "What is the distance between the two bodies in meters? ";								//Line 17
	cin >> d;																						//Line 18
	cout << endl;																					//Line 19

	f = ((m1 * m2) / (d * d));																		//Line 20

	cout << "The force between the two bodies is: K = " << K << "multiplied by " << f << " .";		//Line 21
	cout << endl;																					//Line 22

	return 0;																						//Line 23
}																									//Line 24