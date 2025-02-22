#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> v { 2, 3, 4 };
    int total = 1;
    std::for_each(v.begin(), v.end(), [&total](int n){ total *= n; std::cout << total << " "; });   // 2 6 24
    std::cout << std::endl;
    return 0;
}