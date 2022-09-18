#include "Rational.h"

Rational::Rational(int numerator, int denominator)
	:numerator_(numerator),denominator_(denominator)
{
}

int Rational::GetNumerator() const
{
	return numerator_;
}

int Rational::GetDenominator() const
{
	return denominator_;
}
const Rational operator*(const Rational& lhs,const Rational& rhs)
{
	return Rational(lhs.GetNumerator() * rhs.GetNumerator(), lhs.GetDenominator() * rhs.GetDenominator());
}

