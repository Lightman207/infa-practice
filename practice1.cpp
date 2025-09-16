#include <iostream>

namespace s = std;

int main(){
    double x, y;
    int day = 1;

    s::cout << "How much did I wash on the first day: ";
    s::cin >> x;

    s::cout << "How much money will they be interested in: ";
    s::cin >> y;

    while (x <= y) {
        s::cout << "Day: " << day << " - " << x << "$\n";
        day++;
        x = x*1.1;
    }

    s::cout << "\nHe'll be locked up in " << day << " days \n";
}
