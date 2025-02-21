#include <iostream>

// Base case for compile-time recursion
template <unsigned int N>
struct Fibonacci {
    static constexpr unsigned int result = Fibonacci<N - 2>::result + Fibonacci<N - 1>::result;
};

// Case of 0
template <>
struct Fibonacci<0> {
    static constexpr unsigned int result = 0;
};

// Case of 1
template <>
struct Fibonacci<1> {
    static constexpr unsigned int result = 1;
};


int main() {
    std::cout << "The 8th Fibonacci number is: " << Fibonacci<8>::result << std::endl;  // 21
}