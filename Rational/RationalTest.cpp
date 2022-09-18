#include <gtest/gtest.h>
#include "Rational.h"
TEST(RationalTest, ConstructerDoesNotThrowException) {
	EXPECT_NO_THROW({
		auto sut = new Rational(1,1);
		});
}

TEST(RationalTest, CanreturnNumerator) {
	auto sut = Rational(1, 2);
	EXPECT_EQ(1, sut.GetNumerator());
}


TEST(RationalTest, CanReturnDenominator) {
	auto sut = Rational(1, 2);
	EXPECT_EQ(2, sut.GetDenominator());
}
TEST(RationalTest, CanOperateMulti) {
	EXPECT_NO_THROW(
		{
			Rational a(1, 2);
			Rational b(3, 5);
			Rational c = a * b;
			EXPECT_EQ(3, c.GetNumerator());
			EXPECT_EQ(10, c.GetDenominator());
		});
}


