#include<iostream>

int main() {
    double temp_c = 0, temp_f = 0;
    const double conversion_factor = 9.0 / 5.0;
    const double offset = 32.0;

    std::cout << "Enter the temparature in celsius: ";
    std::cin >> temp_c;
    temp_f = temp_c * conversion_factor + offset;
    std::cout << "Temparature in fahrenheit: " << temp_f << '\n';
    return 0;
}