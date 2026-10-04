// program to take the input of temparature from the user and convert the same to fahrenheit 
// F = C * (9/5) + 32
// BODMAS

#include <iostream>

int main() {
    float temp_c = 0;
    float temp_f = 0;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp_c;
    temp_f = (temp_c * (9.0 / 5.0)) + 32;
    std::cout << "Temparature in fahrenheit: " << temp_f << '\n';

    return 0;
}