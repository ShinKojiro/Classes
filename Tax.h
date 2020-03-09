#pragma once

class Tax
{
public:

	void set(double p, double t);
	void input();
	void output();

	double getPayment();
	double getTaxRate();
	double getFinalAmount();


private:
	double payment;
	double taxRate;
	double finalAmount;
};

void Tax::set(double p, double t)
{
	payment = p;
	taxRate = t;

}

double Tax::getPayment()
{
	return payment;
}

double Tax::getTaxRate()
{
	return taxRate;
}

double Tax::getFinalAmount()
{
	return finalAmount;
}