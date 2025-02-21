#include <iostream>
#include <concepts>


template <typename T>
concept Printable = requires(T t) { std::cout << t; };


template <Printable T>
void printTwice(const T& t) {
    std::cout << t << " " << t << std::endl;
}


int main() {
    printTwice(100);    // 100 100
    printTwice(9.9);    // 9.9 9.9
    return 0;
}