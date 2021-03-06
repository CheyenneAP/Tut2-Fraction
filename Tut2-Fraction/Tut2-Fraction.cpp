#include <iostream>
#include <cmath>
using namespace std;
void display(Fraction b);


class Fraction{
private:

	int num, denom;

public:
	void setND(int n, int d);
	void getND();
	Fraction operator+(Fraction);
	Fraction operator- (Fraction);
	Fraction operator* (Fraction);
	Fraction operator/ (Fraction);
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
Fraction Fraction::operator+ (Fraction c){
	// give new var fraction format
	Fraction ad = Fraction();
	ad.num = (num*c.denom) + (denom*c.num);
	ad.denom = denom*c.denom;
	return ad;
}
// subtraction  operation
Fraction Fraction::operator- (Fraction c){
	c.num = -c.num;
	return operator+(c);
}


//multiplication operation
Fraction Fraction::operator* (Fraction c){
	Fraction p = Fraction();
	p.num = num*c.num;
	p.denom = denom*c.denom;
	return p;
}

//division  operation
Fraction Fraction::operator/ (Fraction c){
	int var = c.num;
	c.num = c.denom;
	c.denom = var;
	return operator* (c);
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


///// main method following 
int main(){
	// create reference to the fraction class 
	Fraction FractObj;
	// give x and y fraction format and assign default values 
	Fraction x = Fraction();
	Fraction y = Fraction();
	//variable to store the answer in a fraction format
	Fraction answer = Fraction();

	// assign default values 
	x.setND(1, 2);
	y.setND(3, 6);

	// initialise the variable uchoice
	int uchoice;
	cout << "Please enter your choice of  arithmetic operations for the fractions from the options provided below" << endl;
	cout << "1. addition" << endl;
	cout << "2.subtraction " << endl;
	cout << "3. Multiplication " << endl;
	cout << "4.Division " << endl;

	// accept input
	cin >> uchoice;

	switch (uchoice){

	case 1:
		// add fractions and simplify

		answer = x+y;
		display(answer);

		break;

	case 2:
		// subtract fractions and simplify
		answer = x-y;
		display(answer);

		break;

	case 3:
		//multiply fractions and simplify
		answer = x*y;
		display(answer);

		break;

	case 4:
		//divide fractions and simplify.
		answer = x/y;
		display(answer);

		break;

	default:
		// default message 
		cout << " You have entered a value out of range" << endl;
		cout << "please enter a value between 1 and 4" << endl;

	}




}