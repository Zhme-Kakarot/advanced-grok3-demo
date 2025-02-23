#include <iostream>
#include <functional>


int main() {
    std::function<int(int)> factorial = [&](int n) {
        return n <= 1 ? 1 : n * factorial(n - 1);
    };

    std::cout << "Factorial of 5 is: " << factorial(5) << std::endl;
    return 0;
}