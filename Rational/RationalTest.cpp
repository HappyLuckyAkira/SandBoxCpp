#include <gtest/gtest.h>
#include "Rational.h"
TEST(RationalTest, FirstTest) {
	EXPECT_NO_THROW({
		auto sut = new Rational(1,1);
		});
}
