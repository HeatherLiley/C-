/*The following program is designed to find the area of a rectangle, the area of a circle, or the volume of a cylinder. However
* (a) the statements are in the incorrect order;
* (b) the function calls are incorrect;
* (c) the logical expression in the while loop is incorrect; and
* (d) the function definitions are incorrect.
* Rewrite the programs o that it works correctly.
* You program must be properly indented.
* (Note that the program is menu driven and allows the user to run the program as long as the user wishes.)
*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const double long PI = 3.14159265359;

int main()
{
	int choice;
	double height, length, width, radius,
		cylinder, rectangle, circle;

	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "This program can calculate the area of a rectangle, the area of a circle, or volume of a cylinder." << endl;
	cout << "To run the program enter: " << endl;
	cout << "1: To find the area of rectangle." << endl;
	cout << "2: To find the area of a circle." << endl;
	cout << "3: To find the volume of a cylinder." << endl;
	cout << "0: To terminate the program." << endl;
	cin >> choice;
	cout << endl;

	while (choice != 0)
	{
		switch (choice)
		{
		case 1:
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "\nEnter the width of the rectangle: ";
			cin >> width;
			cout << endl;

			rectangle = width * length;

			cout << "Area = " << rectangle << endl;
			cout << endl;
			cout << endl;
			break;

		case 2:
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			cout << endl;

			circle = PI * pow(radius, 2);

			cout << "Area = " << circle << endl;
			cout << endl;
			cout << endl;

			break;

		case 3:
			cout << "Enter the radius of the cylinder: ";
			cin >> radius;
			cout << "\nEnter the height of the cylinder: ";
			cin >> height;
			cout << endl;

			cylinder = PI * pow(radius,2) * height;

			cout << "Volume = " << cylinder << endl;
			cout << endl;
			cout << endl;
			break;

		default:
			cout << "Invlaid choice!" << endl;
			cout << endl;
			cout << endl;

		}

		cout << "This program can calculate the area of a rectangle, the area of a circle, or volume of a cylinder." << endl;
		cout << "To run the program enter: " << endl;
		cout << "1: To find the area of rectangle." << endl;
		cout << "2: To find the area of a circle." << endl;
		cout << "3: To find the volume of a cylinder." << endl;
		cout << "0: To terminate the program." << endl;
		cin >> choice;
		cout << endl;
		
	}

	return 0;
}