#include <iostream>
#include "StringStatic.h"
int main() {
    // Creating an object of the base class
    String baseStr("Hello");
    std::cout << "Base string: " << baseStr.getText() << std::endl;
    std::cout << "String length: " << baseStr.length() << std::endl;

    // Creating an object of the derived class
    LetterString letterStr("World");
    std::cout << "Derived string: " << letterStr.getText() << std::endl;

    // Performing right shift
    letterStr.shiftRight();
    std::cout << "String after shift: " << letterStr.getText() << std::endl;

    return 0;
}