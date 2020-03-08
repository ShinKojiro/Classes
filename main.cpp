#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Tax.h"

using namespace std;

int main() 
{
	Tax amount;
	cout << "Enter the current sales tax rate: ";
	cin >> amount.taxRate;

	cout << "\nEnter the payment made: ";
	cin >> amount.payment;

	amount.calculate();
	amount.output();
}

void Tax::calculate()
{
	finalAmount = payment + (payment * (taxRate / 100));
}
void Tax::output()
{
	cout << "The final paymet is $" << finalAmount;
}