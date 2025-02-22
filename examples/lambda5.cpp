#include <iostream>
#include <algorithm>
#include <vector>

// Lambda function within for_each function
int main() {
    std::vector<int> v { 1, 2, 3 };
    std::for_each(v.begin(), v.end(), [](int i) { std::cout << i << " "; });    // 1 2 3
    std::cout << std::endl;
    return 0;
}