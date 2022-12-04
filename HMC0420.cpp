// HMC0420.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* The cost of renting a room at a hotel is, say $100.00 per night.
* For special occasions, such as a weeding or conference, the hotel offers a special discount as follows:
* If the number of rooms booked is at least 10, the discount is 10%;
* at least 20, the discount is 20%, and at least 30, the discount is 30%.
* Also if rooms are booked for at least 3 days, then there is an additional 5% discount.
* 
* Write a program that prompts the user to enter the cost of renting one room, the number of rooms booked,
* the number of days the rooms are booked, and the sales tax (as a percent).
* The program outputs the cost of renting one room, the discount on each room as a percent, the number of rooms booked,
* the number of days the rooms are booked, the total cost of the rooms, the sales tax, and the total billing amount.
* Your program must use appropriate constants to store special values such as various discounts.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double DIECI = 0.10, VENTI = 0.20, TRENTA = 0.30, CINQUE = 0.05;

int main()
{
	int roomDays, roomsReq;
	double roomCost, salesTax, reseTot, cinqDieci;
	double cinqVenti,cinqTrenta, moinsTroisDieci;
	double moinsTroisVenti, moinsTroisTrenta;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the cost of a room for one night: $";
	cin >> roomCost;
	cout << endl;

	cout << endl << "Enter the number of rooms you plan to book: ";
	cin >> roomsReq;
	cout << endl;

	cout << endl << "Enter the number of days required for your stay: ";
	cin >> roomDays;
	cout << endl;

	cout << endl << "Enter the sales tax percentage: ";
	cin >> salesTax;
	cout << "%" << endl;

	if (!cin)
		cout << endl << endl << endl << endl << endl
		<< "!!!!!!!!!!!!!!!!!!!!!!!!_| INPUT ERROR |_!!!!!!!!!!!!!!!!!!!!!!!!"
		<< endl << endl << endl << endl << endl
		<< "Please restart the program and re-enter your information. Thank you!"
		<< endl << endl << endl << endl << endl;
	else
	{
		cout << endl;
	}
	salesTax = salesTax / 100;
	reseTot = roomCost * roomsReq * roomDays;
	cinqDieci = (roomsReq * roomCost) * DIECI + (roomCost * CINQUE);
	cinqVenti = (roomsReq * roomCost) * VENTI + (roomCost * CINQUE);
	cinqTrenta = (roomsReq * roomCost) * TRENTA + (roomCost * CINQUE);
	moinsTroisDieci = (roomsReq * roomCost) * DIECI;
	moinsTroisVenti = (roomsReq * roomCost) * VENTI;
	moinsTroisTrenta = (roomsReq * roomCost) * TRENTA;

	cout << endl << "The nightly rate for one booking is:		$" 
		 << roomCost << endl;
	cout << endl << "We have '" << roomsReq << "' rooms booked for your '" 
		 << roomDays << "' night stay." << endl;
	cout << endl << "Your reservation total is:			$" << reseTot << endl;
	cout << endl << "The sales tax applied is:		 " << salesTax*100 
		 << "%" << endl;

	switch (roomsReq < 10)
	{
	case 0:
		if (roomDays > 3 && roomsReq <= 19)
			cout << endl << "We appreciate your business!" << endl
			<< "To show our appreciation you will be receving * *$"
			<< cinqDieci << "** off your stay!" << endl
			<< endl 
			<< "Including sales tax, the total of your stay is:			$"
			<< (reseTot - cinqDieci) * salesTax + reseTot;
		else if (roomDays < 3 && roomsReq <= 19)
			cout << endl << "We appreciate your business!" << endl
			<< "To show our appreciation you will be receving * *$"
			<< moinsTroisDieci << "** off your stay!" << endl
			<< endl 
			<< "Including sales tax, the total of your stay is:			$" 
			<< (reseTot - moinsTroisDieci) * salesTax + reseTot;
		else if (roomDays > 3 && roomsReq <= 29)
			cout << endl << "We appreciate your business!" << endl
			<< "To show our appreciation you will be receving * *$"
			<< cinqVenti << "** off your stay!" << endl
			<< endl 
			<< "Including sales tax, the total of your stay is:			$" 
			<< (reseTot - cinqVenti) * salesTax + reseTot;
		else if (roomDays < 3 && roomsReq <= 29)
			cout << endl << "We appreciate your business!" << endl
			<< "To show our appreciation you will be receving * *$"
			<< moinsTroisVenti << "** off your stay!" << endl
			<< endl 
			<< "Including sales tax, the total of your stay is:			$" 
			<< (reseTot - moinsTroisVenti) * salesTax + reseTot;
		else if (roomDays > 3 && roomsReq >= 30)
			cout << endl << "We appreciate your business!" << endl
			<< "To show our appreciation you will be receving * *$"
			<< cinqTrenta << "** off your stay!" << endl
			<< endl 
			<< "Including sales tax, the total of your stay is:			$" 
			<< (reseTot - cinqTrenta) * salesTax + reseTot;
		else if (roomDays < 3 && roomsReq >= 30)
			cout << endl << "We appreciate your business!" << endl
			<< "To show our appreciation you will be receving * *$"
			<< moinsTroisTrenta << "** off your stay!" << endl
			<< endl 
			<< "Including sales tax, the total of your stay is:			$" 
			<< (reseTot - moinsTroisTrenta) * salesTax + reseTot;
		else
			cout << endl;
		break;

	case 1:
		cout << endl << "We appreciate your business!" << endl << endl;
		cout << "Including sales tax, the total of your stay is:		$" 
			 << reseTot * salesTax + reseTot;
		break;
	}
	
	cout << endl << endl 
		 << "~*~*~*~*~|Thank You for Booking Your Stay at C++ Resorts|~*~*~*~*~" 
		 << endl << endl;

	return 0;
}
