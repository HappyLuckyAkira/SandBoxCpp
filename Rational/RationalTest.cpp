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
