#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    // Declare and instantiate a vector of integers
    std::vector<int> v { 1, 2, 3, 4, 5, 6, 7 };

    // Call for_each and use a lamda function to print values
    //  [Capture](Parameter){Function Body}
    std::for_each(v.begin(), v.end(), 
        [](int n) {
            std::cout << n << std::endl;
        }
    );

    return 0;
}