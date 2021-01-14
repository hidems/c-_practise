#include <iostream>

int main(void)
{
    float inch, cm, feet ;

    std::cout << "Input inch: ";
    std::cin >> inch;

    cm = inch * 2.54;
    feet = inch / 12;

    std::cout << "This is " << feet << " feet." << std::endl;
}