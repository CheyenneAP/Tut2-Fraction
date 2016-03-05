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

// add operation
Fraction Fraction::add(Fraction c){
	// give new var fraction format
	Fraction ad = Fraction();
	ad.num = (num*c.denom) + (denom*c.num);
	ad.denom = denom*c.denom;
	return ad;
}
// subtraction  operation
Fraction Fraction::subtract(Fraction c){

	Fraction ad = Fraction();
	ad.num = (num*c.denom) - (denom*c.num);
	ad.denom = denom*c.denom;
	return ad;
}