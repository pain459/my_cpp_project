// program to determine distance between 2 points using euclidian formula.
//formula is d = sqrt((x2 - x1)^2 + (y2 - y1)^2)

#include<iostream>
#include<cmath>

int main() {
    double x1, x2, y1, y2;
    int exponent = 2;
    // taking inputs
    std::cout << "Enter x1: ";
    std::cin >> x1;
    std::cout << "Enter x2: ";
    std::cin >> x2;
    std::cout << "Enter y1: ";
    std::cin >> y1;
    std::cout << "Enter y2: ";
    std::cin >> y2;
    // applying formula
    double base1 = std::pow((x2 - x1), exponent);
    double base2 = std::pow((y2 - y1), exponent);
    double d = sqrt(base1 + base2);
    std::cout << "The euclidian distance is " << d << "\n";
    return 0;
}