#include <iostream>

// Base case of recursive, compile-time calculation
template <unsigned int N>
struct isEven {
    static constexpr bool result = (N % 2 == 0);
};


int main() {
    std::cout << "Is 3 even? " << ((isEven<3>::result) ? "Yes" : "No") << std::endl;    // No
    std::cout << "Is 8 even? " << ((isEven<8>::result) ? "Yes" : "No") << std::endl;    // Yes
    return 0;
}