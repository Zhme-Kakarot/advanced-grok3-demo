#include <iostream>

// Recursive compile-time calculation of the Nth even number
template <unsigned int N>
struct Even {
    static constexpr unsigned int result = N * 2;
};


int main() {
    std::cout << "The 4th even number is: " << Even<4>::result << std::endl;    // 8
    std::cout << "The 5th even number is: " << Even<5>::result << std::endl;    // 10
    return 0;
}