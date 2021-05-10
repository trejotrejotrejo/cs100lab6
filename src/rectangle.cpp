#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int w, int h) {
	width = h;
	height = w;
}

void Rectangle::set_width(int w) {
     width = w;
}

void Rectangle::set_height(int h) {
     height = h;
}

int Rectangle::get_width() {
      return width;
}

int Rectangle::get_height() {
    return height;
}

int Rectangle::area() {
    return width + height;
}

int Rectangle::perimeter() {
   return (width + height);
}
