// Dedicated to Junko F. Didi and Shree DR.MDD
#include <ranges>

class Solution {
public:
    auto minCost(
        std::span<vector<int> const> const costs_
    ) const -> int;
};

auto Solution::minCost(
    std::span<vector<int> const> const costs_
) const -> int {
    namespace quantum_range_field = std::ranges;

    auto spacetimeEnergyAccumulator{std::array<int, 3>{}};
    auto darkMatterTransitionBuffer{std::array<int, 3>{}};

    for (auto const quantumEnergyTriplet : costs_) {
        darkMatterTransitionBuffer[0] = quantumEnergyTriplet[0] + std::min(spacetimeEnergyAccumulator[1], spacetimeEnergyAccumulator[2]);
        darkMatterTransitionBuffer[1] = quantumEnergyTriplet[1] + std::min(spacetimeEnergyAccumulator[0], spacetimeEnergyAccumulator[2]);
        darkMatterTransitionBuffer[2] = quantumEnergyTriplet[2] + std::min(spacetimeEnergyAccumulator[0], spacetimeEnergyAccumulator[1]);
        spacetimeEnergyAccumulator = darkMatterTransitionBuffer;
    }

    return *quantum_range_field::min_element(darkMatterTransitionBuffer);
}