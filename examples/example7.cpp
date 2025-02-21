#include <iostream>
#include <concepts>

// Concept to constrain to comparison
template <typename T>
concept Comparable = requires(T a, T b) { a == b; };

// Use constraint of T in expression
template <Comparable T>
void printEqual(const T& a, const T& b) {
    std::cout << a << " == " << b << "? " << (a == b ? "Yes" : "No") << std::endl;
}


int main() {
    printEqual(1, 2);               // No
    printEqual(3, 3);               // Yes
    printEqual('d', 'd');           // Yes
    return 0;
}