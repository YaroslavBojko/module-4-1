#include <iostream>

int main() {
    int number1;
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    int number2;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    if(number1 < number2)
        std::cout << "Smallest number: " << number1 << std::endl;
    else if (number2 < number1)
        std::cout << "Smallest number: " << number2 << std::endl;
    else
        std::cout << "The numbers are equal!" << std::endl;
}
