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


//multiplication operation
Fraction Fraction::multiply(Fraction c){
	Fraction x = Fraction();
	x.num = num*c.num;
	x.denom = denom*c.denom;
	return x;
}

//division  operation
Fraction Fraction::divide(Fraction c){
	int var = c.num;
	c.num = c.denom;
	c.denom = var;
	return multiply(c);
}

void Fraction::printout(){
	if (num == 0){
		num = 0;
		cout << num << endl;
	}
	else{
		for (int i = denom; i >= 1; i--) {
			if ((denom % i == 0) && (num % i == 0)) {
				denom = denom / i;
				num = num / i;
			}
		}

		int numint = (int)num / denom;
		int remain = num%denom;
		if (remain == 0){
			cout << numint << endl;
		}
		else{
			if (numint == 0){
				cout << remain << "/" << denom << endl;
			}

			cout << numint << "  +  " << remain << "/" << denom << " " << endl;
		}
	}
}

// display the answer 
void Fraction::display(Fraction b){
	cout << " the answer = " << endl;
	b.getND();
	b.printout();
}

