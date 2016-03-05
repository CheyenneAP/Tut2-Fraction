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

//  default constructor 
Fraction::Fraction(){
	num = 0;
	denom = 1;
}

// default destructor 
Fraction::~Fraction(){

}

// give the fraction values 
void Fraction::setND(int n, int d){
	num = n;
	denom = d;
}

// output the fraction int the correct format
void Fraction::getND(){
	cout << num << " / " << denom << endl;
}