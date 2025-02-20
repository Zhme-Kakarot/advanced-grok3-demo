

#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <numeric>
#include <execution>
#include <ranges>
#include <concepts>

// Compile-time power calculation with concepts
template <std::integral T, T Base, T Exp>
struct Power {
    static_assert(Exp >= 0, "Negative exponents not supported");
    static constexpr T value = Base * Power<Base, Exp - 1>::value;
};

template <std::integral T, T Base>
struct Power<Base, T, 0> {
    static constexpr T value = 1;
};

// Generic transformation with parallel execution
template <typename T>
concept Transformable = requires(T t) { t * 2; };

template <Transformable T>
void parallelTransform(std::vector<T>& vec) {
    std::transform(std::execution::par, vec.begin(), vec.end(), vec.begin(),
                   [](T n) { return n * 2; });
}

// Sum with constraints
template <std::integral T>
T computeSum(const std::vector<T>& vec) {
    return std::reduce(std::execution::par, vec.begin(), vec.end(), T{0});
}

int main() {
    // Smart pointer with compile-time computation
    auto ptr = std::make_unique<long long>(Power<2, 3>::value); // 2^3 = 8
    std::cout << "2^3: " << *ptr << std::endl;

    // Parallel transformation and range-based output
    std::vector<double> numbers = {1.5, 2.5, 3.5, 4.5};
    std::cout << "Original sum: " << computeSum(numbers) << std::endl;
    parallelTransform(numbers);

    for (const auto& [i, v] : numbers | std::views::enumerate) {
        std::cout << "Index " << i << ": " << v << std::endl;
    }

    return 0;
}