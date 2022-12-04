//Programming Exercise Chapter 03, # 7.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int d1, d2;
	double netBalance, payment, interestRate, avgDailyBal, interest;
	
	cout << "Let's find the interest on your Credit Card's unpaid balance..." << endl;
	cout << "Please enter the Net Balance: " << endl << "$";
	cin >> netBalance;
	cin.clear();
	cin.ignore(200, '\n');
	
	cout << "Please enter the Payment Amount: " << endl << "$";
	cin >> payment;
	cin.clear();
	cin.ignore(200, '\n');

	cout << "Please enter the number of days in the billing cycle: " << endl;
	cin >> d1;
	cin.clear();
	cin.ignore(200, '\n');
	
	cout << "Please enter the number of days the payment was made before the billing cycle: " << endl;
	cin >> d2;
	cin.clear();
	cin.ignore(200, '\n');
	
	cout << "Your Net Balance is: $" << netBalance << "\n Your Payment Amount is: $" << payment << "\n Your Billing Cycle is " << d1
		<< " days.\n Your payment was made " << d2 << " days before the billing cycle." << endl;

	avgDailyBal = (netBalance * d1 - payment * d2) / d1;

	cout << "Therefore, Your Average Daily Balance is: $" << avgDailyBal << endl;
	cout << "Please enter the Interest Rate per Month: " << endl;
	cin >> interestRate;
	cin.clear();
	cin.ignore(200, '\n');

	interest = avgDailyBal * interestRate;

	cout << fixed << showpoint << setprecision(2) << "The Total Interest of the Account is: $" << interest << endl;

	cin.clear();
	cin.ignore(200, '\n');

	return 0;

}