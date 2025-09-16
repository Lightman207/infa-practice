#include <iostream>

namespace s = std;

int main() {
    int a, b;

    s::cout << "Enter a number A \n";
    s::cin >> a;
    s::cout << "Enter a number B \n";
    s::cin >> b;

    while (a > b) {
        if (a % 2 == 0 && a / 2 >= b) {
            a /= 2;
            s::cout << ":2\n";
        }
        else {
            a -= 1;
            s::cout << "-1\n";
        }
    }
    s::cout << "Done! ";
}
