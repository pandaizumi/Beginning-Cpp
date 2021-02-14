// Exercise 2-3: Create a program that converts inches to feet and inches.
#include <iostream>

int main() {
    const int INCHES_PER_FOOT{12};

    int totalInches{}, inches{}, feet{};

    std::cout << "Please enter the total number of inches: ";
    std::cin >> totalInches;

    feet = totalInches / INCHES_PER_FOOT;
    inches = totalInches % INCHES_PER_FOOT;

    std::cout << totalInches << " inches is "
              << feet << " feet " << inches << " inches.\n";
    return 0;
}
