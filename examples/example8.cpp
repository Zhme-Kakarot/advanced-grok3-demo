#include <iostream>
#include <concepts>
#include <string>

// Concept to constrain to length() member functions
template <typename T>
concept HasLength = requires(T t) { { t.length()} -> std::convertible_to<size_t>; };

// Use constraint in expression
template <HasLength T>
void printLength(const T& value) {
    std::cout << "Length: " << value.length() << std::endl;
}


int main() {
    std::string s = "Hello!";
    printLength(s);     // 6
    return 0;
}