#pragma once
#include <istream>
using namespace std;
class frac
{
private:
	int Numerator;
	int Denominator;
	
public:
	int* arr;
	frac(int _Numerator, int _Denominator);
	frac();
	//frac(frac & f);

	int getNumerator();
	void setNumerator(int _Numerator);
	int getDenominator();
	void setDenominator(int _Denominator);
	
	static frac FuncAdd(frac _f1, frac _f2);
	frac FuncFrac(frac _f);
	frac ReFuncFrac();

	frac operator= (frac c);
	frac operator-(frac _f);
	frac operator--();
	bool operator== (frac _f2);
	operator double();
	friend ostream& operator<<  (ostream& output, frac& c);
	friend istream& operator>> (istream& input, frac& c);
	~frac();
};

