/*
Odd Number Checker: Write a lambda that returns true if an int is odd; test with 7 and 8.
*/
#include <iostream>

int main() {
    auto isOdd = [](int i) { return (i % 2 != 0); };
    std::cout << isOdd(7) << std::endl;     // true
    std::cout << isOdd(8) << std::endl;     // false
    return 0;
}