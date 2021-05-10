
#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(RectangleTest, DefaultConstructor) {
         Rectangle* rect = new Rectangle(0, 0);
         EXPECT_EQ(rect->get_width(), 0);
         delete rect;
}
 
TEST(RectangleTest, Constructor2) {
         Rectangle* rect = new Rectangle(10, 12);
         EXPECT_EQ(rect->get_height(), 12);
         delete rect;
 }
  
 TEST(RectangleTest, Constructor3) {
         Rectangle* rect = new Rectangle(4.5, 0.2);
         EXPECT_EQ(rect->get_width(), 4);
         delete rect;
 }


TEST(RectangleTest, AreaHeightZero) {
         Rectangle* rect = new Rectangle(9,0);
         EXPECT_EQ(rect->area(), 0);
         delete rect;
 }

TEST(RectangleTest, AreaPositive) {
	Rectangle* rect = new Rectangle(3, 5);
	EXPECT_EQ(rect->area(), 15);
	delete rect;
}

TEST(RectangleTest, DecimalArea) {
	Rectangle* rect = new Rectangle(2, 3.2);
	EXPECT_EQ(rect->area(), 6);
	delete rect;
}

TEST(RectangleTest, PerimeterPositive) {
	Rectangle* rect = new Rectangle(3, 5);
	EXPECT_EQ(rect->perimeter(), 16);
	delete rect;
}

TEST(RectangleTest, DecimalPerimeter) {
	Rectangle* rect = new Rectangle(2, 3.2);
	EXPECT_EQ(rect->perimeter(), 10);
	delete rect;
}

TEST(RectangleTest, NegativePerimeter) {
        Rectangle* rect = new Rectangle(2, -3);
        EXPECT_EQ(rect->perimeter(), -2);
        delete rect;
}
