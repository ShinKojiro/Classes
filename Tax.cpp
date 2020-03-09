#include "Tax.h"
#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


int main()
{

	Tax newAmount;
	cout << "This is a simple sales tax calculator.\n";

	newAmount.input();
	newAmount.output();

}

void Tax::input()
{
	cout << "Enter the tax rate: ";
	cin >> taxRate;
	cout << "Enter the payment amount ";
	cin >> payment;

	finalAmount = payment + (payment * (taxRate / 100));
}

void Tax::output()
{
	cout << finalAmount;
}