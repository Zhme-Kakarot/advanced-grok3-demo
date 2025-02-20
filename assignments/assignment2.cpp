#include <iostream>
#include <concepts>

// Assignment 2 Concept: Printable
// Define a concept that checks if a type T supports std::cout << t
template <typename T>
concept Printable = requires(T t) { std::cout << t; };

// Function Template: printValue
// Write a function that takes a const T& and prints it, constrained by Printable
template <Printable T>
void printValue(const T& value) {
    std::cout << value << std::endl;
}

int main() {
    // Test with int type: 42
    int i = 42;
    printValue(i);

    // Test with double type: 3.14
    /* Call printValue here */
    double d = 3.14;
    printValue(d);

    return 0;
}