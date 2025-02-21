#include <iostream>
#include <concepts>


template <typename T>
concept Comparable = requires(T a, T b) { a == b; };


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