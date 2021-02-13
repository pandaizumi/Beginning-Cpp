// Exercise 2-1: Write a program that computes the area of a circle.
#include <iostream>

int main() {
    const double PI{3.14159};

    double radius{};
    double area{};

    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;

    area = PI * radius * radius;

    std::cout << "The area of the circle is " << area  << std::endl;

    return 0;
}
