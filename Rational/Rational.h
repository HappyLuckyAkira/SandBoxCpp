#pragma once
#include <gtest/internal/gtest-port.h>

class Rational
{
public:
	Rational(int numerator, int denominator);
	int GetNumerator() const;
	int GetDenominator() const;
private:
	int numerator_;
	int denominator_;
};
const Rational operator*(const Rational& lhs, const Rational& rhs);
