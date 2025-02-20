#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <numeric>
#include <execution>
#include <ranges>
#include <concepts>

// Compile-time power calculation with concepts
template <typename T, T Base, T Exp>
requires std::integral<T>
struct Power {
    static_assert(Exp >= 0, "Negative exponents not supported");
    static constexpr T value = Base * Power<T, Base, Exp - 1>::value;
};

// Case of Exp = 0
template <typename T, T Base, T Exp>
requires std::integral<T> && (Exp == 0)
struct Power<T, Base, Exp> {
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

// Sum with constraints (generalized for any numeric type)
template <typename T>
T computeSum(const std::vector<T>& vec) {
    return std::reduce(std::execution::par, vec.begin(), vec.end(), T{0});
}

int main() {
    // Smart pointer with compile-time computation
    auto ptr = std::make_unique<long long>(Power<long long, 2, 3>::value); // 2^3 = 8
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