#include <iostream>
#include <concepts>


template <typename T>
concept Numeric = requires(T a, T b) { a * b; a + b; };

template <Numeric T>
void printProduct(const T& a, const T& b) {
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
}


int main() {
    printProduct(2, 3);         // 2 * 3 = 6
    printProduct(3.0, 3.3);     // 3 * 3.3 = 9.9
    return 0;
}