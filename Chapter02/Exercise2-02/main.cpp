// Exercise 2-2: Using Exercise 2-1's solution, improve it so the user can control the precision by entering the number of digits required.
#include <iostream>
#include <iomanip>

int main() {
    const double PI{3.141592653589793238};

    double radius{};
    double area{};
    int precision{};

    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;

    area = PI * radius * radius;

    std::cout << "Enter the amount of precision for the output: ";
    std::cin >> precision;

    std::cout << std::setprecision(precision);

    std::cout << "The area of the circle is " << area  << std::endl;

    return 0;
}
