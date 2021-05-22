#include "frac.h"
frac::frac()
{
	Numerator = 0;
	Denominator = 1;
	arr = new int[2];
}

//frac::frac(frac& f)
//{
//	Numerator = f.Numerator;
//	Denominator = f.Denominator;
//	arr = new int[2];
//	for (int i = 0; i < 2; i++)
//	{
//		arr[i] = f.arr[i];
//	}
//}

frac::frac(int _Numerator, int _Denominator)
{
	Numerator = _Numerator;
	Denominator = _Denominator;
	if (Denominator == 0)
	{
		Denominator = 1;
	}

}

int frac::getNumerator()
{
	return Numerator;
}

void frac::setNumerator(int _Numerator)
{
	Numerator = _Numerator;
}

int frac::getDenominator()
{
	return Denominator;
}

void frac::setDenominator(int _Denominator)
{
	Denominator = _Denominator;
}

frac frac::FuncFrac(frac _f)
{
	frac res,refrac;
	res.setNumerator((this->Numerator * _f.Denominator) + (_f.Numerator * this->Denominator));
	res.setDenominator((this->Denominator * _f.Denominator));
	
	res.ReFuncFrac();

	return res;
}

frac frac::FuncAdd(frac _f1, frac _f2)
{
	frac res, refrac;
	res.setNumerator((_f1.Numerator * _f2.Denominator) + (_f2.Numerator * _f1.Denominator));
	res.setDenominator((_f1.Denominator * _f2.Denominator));
	return res;
}

frac frac::ReFuncFrac()
{

	int numerator = 0.0;
	int denominator = 0.0;

	numerator = this->getNumerator();
	denominator = this->getDenominator();
	
	for (int i = 1; i < 10; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			numerator /= i;
			denominator /= i;
		}

	}
	this->setNumerator(numerator);
	this->setDenominator(denominator);
	
	if (numerator > 10) {
		this->ReFuncFrac();
	}
	return *this;
}

frac frac::operator-(frac _f)
{
	frac res, refrac;
	res.setNumerator((this->Numerator * _f.Denominator) - (_f.Numerator * this->Denominator));
	res.setDenominator((this->Denominator * _f.Denominator));

	res.ReFuncFrac();
	return res;
}

frac frac::operator= (frac c)
{
	this->arr = new int[2];
	for (int i = 0; i < 2; i++)
	{
		this->arr[i] = c.arr[i];
	}
	frac f = *this;
	return f;
}

frac frac::operator--()
{
	frac res, refrac;
	res.setNumerator(this->Numerator - 1);
	res.setDenominator(this->Denominator -1);
	res.ReFuncFrac();
	return res;
}

frac::operator double()
{
	frac _f1;
	return (_f1.getNumerator() / _f1.getDenominator());
}

bool frac::operator== (frac _f2)
{
	int res1 = (this->Numerator / this->Denominator);
	int res2 = (_f2.getNumerator() / _f2.getDenominator());
	return (res1 == res2);
}

frac::~frac()
{
}

ostream& operator<<(ostream& output, frac& f)
{
	output << f.getNumerator() << "/" << f.getDenominator();
	return output;
}

istream& operator>>(istream& input, frac& f)
{
	int num, den;
	input >> num >> den;
	f.setNumerator(num);
	f.setDenominator(den);
	return input;
}
