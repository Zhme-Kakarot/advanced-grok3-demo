#include <iostream>

// Recursive compile-time calculation of Sum to N
template <unsigned int N>
struct Sum {
    static constexpr unsigned int result = N + Sum<N - 1>::result;
};

// Base case of 0 to end recursion
template <>
struct Sum<0> {
    static constexpr unsigned int result = 0;
};

int main() {
    // Test sum of 0-7: 28
    std::cout << "The sum of all numbers up to 7 is: " << Sum<7>::result << std::endl;
    return 0;
}