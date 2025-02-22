/*
Value Doubler: Create a lambda stored in a variable that doubles an int; use it to print doubles of 5 and 10.
*/
#include <iostream>


int main() {
    auto doubler = [](int i) { return i * 2; };
    std::cout << doubler(5) << std::endl;
    std::cout << doubler(10) << std::endl;
    return 0;
}