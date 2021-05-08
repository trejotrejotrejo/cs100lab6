#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(RectangleTest, DefaultArea) {
	Rectangle* rect = new Rectangle();
	EXPECT_EQ(rect->area(), 0);
	delete rect;
}

TEST(RectangleTest, AreaPositive) {
	Rectangle* rect = new Rectangle(3, 5);
	EXPECT_EQ(rect->area(), 15);
	delete rect;
}
<<<<<<< HEAD

TEST(RectangleTest, PerimeterPositive) {
	Rectangle* rect = new Rectangle(3, 5);
	EXPECT_EQ(rect->perimeter(), 16);
	delete rect;
}

TEST(RectangleTest, DecimalArea) {
	Rectangle* rect = new Rectangle(2, 3.2);
	EXPECT_EQ(rect->area(), 6);
	delete rect;
}

TEST(RectangleTest, DecimalPerimeter) {
	Rectangle* rect = new Rectangle(2, 3.2);
	EXPECT_EQ(rect->perimeter(), 10);
	delete rect;
}

=======
>>>>>>> a266f29d447fd9acf85a60701e88202faa1898e3

TEST(RectangleTest, PerimeterPositive) {
	Rectangle* rect = new Rectangle(3, 5);
	EXPECT_EQ(rect->perimeter(), 16);
	delete rect;
}

TEST(RectangleTest, DecimalArea) {
	Rectangle* rect = new Rectangle(2, 3.2);
	EXPECT_EQ(rect->area(), 6);
	delete rect;
}

TEST(RectangleTest, DecimalPerimeter) {
	Rectangle* rect = new Rectangle(2, 3.2);
	EXPECT_EQ(rect->perimeter(), 10);
	delete rect;
}
