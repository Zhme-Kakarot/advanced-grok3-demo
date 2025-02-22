#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<double> v { 1.5, 2.5, 3.5 };
    std::transform(v.begin(), v.end(), v.begin(), [](double n){ return n * n; });
    for(auto d : v) std::cout << d << " ";      // 2.25 6.25 12.25
    std::cout << std::endl;
    return 0;
}