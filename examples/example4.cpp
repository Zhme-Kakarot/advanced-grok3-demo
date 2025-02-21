#include <iostream>

// Base case - recursive at compile-time
template <unsigned int N>
struct PowerOfThree {
    static constexpr unsigned int result = 3 * PowerOfThree<N - 1>::result;
};

// Case 0
template <>
struct PowerOfThree<0> {
    static constexpr unsigned int result = 1;
};


int main() {
    std::cout << "3 to the 3rd power is: " << PowerOfThree<3>::result << std::endl; // 27
    return 0;
}