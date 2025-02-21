#include <iostream>
#include <concepts>

// Concept to check if type is printable
template <typename T>
concept Printable = requires(T t) { std::cout << t; };

// Apply constrained type to expression
template <Printable T>
void printTwice(const T& t) {
    std::cout << t << " " << t << std::endl;
}


int main() {
    printTwice(100);    // 100 100
    printTwice(9.9);    // 9.9 9.9
    return 0;
}