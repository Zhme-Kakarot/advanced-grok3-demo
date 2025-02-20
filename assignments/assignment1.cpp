
/*  
    In main(), instantiate Factorial<3> and print its value member using std::cout.
    Expected Output: Factorial of 3: 6 (since 3! = 3 * 2 * 1 = 6).
    Logical Reference: This tests the template’s correctness and connects compile-time results to runtime display.
*/

#include <iostream>


template <unsigned int N>
struct Factorial {
    static constexpr unsigned int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static constexpr unsigned int value = 1;
};

int main() {

    std::cout << "Factorial of 3: " << Factorial<3>::value << std::endl;

    return 0;
}