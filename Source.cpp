#include <iostream>

using namespace std;

const int QUARTERS = 25;
const int DIMES = 10;
const int NICKELS = 5;


int main() {
	
	int num_quarters, num_dimes, num_nickels, total;

	cout << "enter the number of quarters: ";
	cout << endl;
	cin >> num_quarters;

	cout << "enter the number of dimes: ";
	cout << endl;
	cin >> num_dimes;

	cout << "enter the number of nickels: ";
	cout << endl;
	cin >> num_nickels;

	total = (QUARTERS * num_quarters) + (DIMES * num_dimes) + (NICKELS * num_nickels);

	cout << "The total amount in pennies will be: " << total << " cents.";

	return 0;
}
