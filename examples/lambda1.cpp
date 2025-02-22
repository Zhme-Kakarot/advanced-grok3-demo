/*
Greeting Printer: Write a lambda that takes a std::string name and prints “Hello, [name]!”; call it directly with your name.
*/
#include <iostream>
#include <string>

int main() {
    [](std::string name) { std::cout << "Hello, " << name << "!" << std::endl; }("Peter Dinklage");
    return 0;
}