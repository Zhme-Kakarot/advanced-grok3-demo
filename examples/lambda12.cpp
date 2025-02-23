#include <iostream>


int main() {
    auto lesser = [](auto a, auto b) { return (a < b) ? a : b; };
    std::cout << "Which is lesser? (3 or 7): " << lesser(3, 7) << std::endl;
    std::cout << "Which is lesser? (7.7 or 3.3): " << lesser(7.7, 3.3) << std::endl;
    return 0;
}