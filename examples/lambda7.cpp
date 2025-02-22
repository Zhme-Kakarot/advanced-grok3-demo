#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> v { 1, 2, 3, 4, 5 };
    std::for_each(v.begin(), v.end(), [](int n){
        if(n % 2 == 0) std::cout << n << " ";
    });
    std::cout << std::endl;     // 2 4\n
    return 0;
}