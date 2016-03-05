#include <iostream>
#include <cmath>
using namespace std;








class Fraction{
private:

	int num, denom;

public:
	void setND(int n, int d);
	void getND();
	Fraction add(Fraction);
	Fraction subtract(Fraction);
	Fraction multiply(Fraction);
	Fraction divide(Fraction);
	Fraction(void);
	~Fraction(void);
	void printout();
	void display(Fraction);

};