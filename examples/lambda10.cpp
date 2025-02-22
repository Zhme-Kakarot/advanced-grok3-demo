#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> v { 5, 2, 8, 1 };
    std::sort(v.begin(), v.end(), [](int a, int b){ return a < b; });
    for(auto i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}