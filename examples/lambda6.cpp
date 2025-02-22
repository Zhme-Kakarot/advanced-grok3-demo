#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> v(5);
    int multiplier = 3;
    int index = 0;
    std::for_each_n(v.begin(), 5, [&index, multiplier](int& n){ n = index++ * multiplier; });
    for(auto i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}