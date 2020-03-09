#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Tax.h"

using namespace std;

int main() 
{	
	double newPayment;
	double newTaxRate;
	Tax newAmount;
	cout << "This is a simple sales tax calculator.\n";

	//newAmount.input();
	cout << "Enter the current sales tax rate: ";
	cin >> newTaxRate;

	cout << "\nEnter the payment made: ";
	cin >> newPayment;
	newAmount.set(newPayment, newTaxRate);
	newAmount.output();
	
}

//void Tax::input()
//{
//	
//}

void Tax::output()
{
	cout << "The final amount is $" << getFinalAmount();
}
