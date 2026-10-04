#include <iostream>

int main() {
    int first = 7;
    float first_decimal = 7.0;
    int second = 2;

    std::cout << "Addition: " << first + second << '\n';
    std::cout << "Subtraction: " << first - second << '\n';
    std::cout << "Multiplication: " << first * second << '\n';
    std::cout << "Integer division: " << first / second << '\n';
    std::cout << "Remainder: " << first % second << '\n';
    std::cout << "Deciman division: " << first_decimal / second << '\n';
    // multiplication, integer division, remainder, Deciman Division
    double result = first / second;
    std::cout << "Stored in a double: " << result << '\n';
    return 0;
}