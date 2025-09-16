#include <iostream>

namespace s = std;

int main() {
    long long a, b;

    s::cout << "Enter A and then B: ";
    s::cin >> a >> b;

    s::cout << "\nAddition: " << a+b << "\n";
    s::cout << "Subtraction: " << a-b << "\n";
    s::cout << "Division: " << a/b << "\n";
    s::cout << "Multiplication: " << a*b << "\n";
}
