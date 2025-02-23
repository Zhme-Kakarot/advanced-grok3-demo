#include <iostream>
#include <memory>

int main() {
    // Create a unique_ptr with an int
    /* Add std::make_unique here */
    auto ptr = std::make_unique<int>(42);   // Swapped verbose std::unique_ptr for auto


    // Print the value
    /* Dereference and print here */
    std::cout << "The value of the unique_ptr is: " << *ptr << std::endl;
    
    return 0;
}