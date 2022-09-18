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
