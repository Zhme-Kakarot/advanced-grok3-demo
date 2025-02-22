/*
Counter Incrementer: Define a lambda that captures an int counter by reference and increments it; call it three times and print the result.
*/
#include <iostream>

int main() {
    int counter = 0;
    auto increment = [&counter]() { counter++; };
    increment();
    increment();
    increment();
    std::cout << counter << std::endl;
    return 0;
}