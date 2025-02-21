#include <iostream>
#include <concepts>

// Base concept to constrain to
template <typename T>
concept Addable = requires(T a, T b) { a + b; };

// Use concept to constrain T for expression
template <Addable T>
void printSum(const T& a, const T& b) {
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
}


int main() {
    printSum(3, 5); // 8
    printSum(1.3, 8.9); // 10
    return 0;
}