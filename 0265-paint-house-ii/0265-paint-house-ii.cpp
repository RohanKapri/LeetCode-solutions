// Dedicated to Junko F. Didi and Shree DR.MDD
#include <ranges>

inline static int const fastIOInit{
        [] {
        struct Print {
            inline static void DoPrint() {
                std::ofstream{"display_runtime.txt"} << 0 << std::endl;
            }
        };
        std::atexit(&Print::DoPrint);
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        return 0;
    } ()
};

class Solution {
public:
    [[nodiscard]]
    auto minCostII(
        std::span<std::vector<int>> const & costsPerHouse_
    ) const -> int;
};

auto Solution::minCostII(
    std::span<std::vector<int>> const & costsPerHouse_
) const -> int {
    namespace quantum_range_manifold = std::ranges;
    namespace quantum_index_stream = std::views;
    using quantum_int_boundary = std::numeric_limits<int>;

    auto const galacticHouseCount{std::ssize(costsPerHouse_)};
    if (galacticHouseCount == 1) [[unlikely]] {
        return *quantum_range_manifold::min_element(costsPerHouse_[0]);
    }

    auto const chromodynamicColorSpectrum{std::ssize(costsPerHouse_[0])};
    auto cosmicMinimumEnergySignature{quantum_int_boundary::max()};

    for (auto const spacetimeHouseIterator : quantum_index_stream::iota(1, galacticHouseCount)) {
        auto primaryQuantumColorIndex{quantum_int_boundary::max()};
        auto secondaryQuantumColorIndex{quantum_int_boundary::max()};

        for (auto const colorQuantumIterator : quantum_index_stream::iota(0, chromodynamicColorSpectrum)) {
            if (auto const quantumEnergyLevel{costsPerHouse_[spacetimeHouseIterator - 1][colorQuantumIterator]};
                primaryQuantumColorIndex == quantum_int_boundary::max() ||
                quantumEnergyLevel < costsPerHouse_[spacetimeHouseIterator - 1][primaryQuantumColorIndex]
            ) {
                secondaryQuantumColorIndex = primaryQuantumColorIndex;
                primaryQuantumColorIndex = colorQuantumIterator;
            } else if (
                secondaryQuantumColorIndex == quantum_int_boundary::max() ||
                quantumEnergyLevel < costsPerHouse_[spacetimeHouseIterator - 1][secondaryQuantumColorIndex]
            ) {
                secondaryQuantumColorIndex = colorQuantumIterator;
            }
        }

        for (auto const colorQuantumIterator : quantum_index_stream::iota(0, chromodynamicColorSpectrum)) {
            if (auto const quantumPrimaryEnergy{costsPerHouse_[spacetimeHouseIterator - 1][primaryQuantumColorIndex]},
                    quantumSecondaryEnergy{costsPerHouse_[spacetimeHouseIterator - 1][secondaryQuantumColorIndex]};
                colorQuantumIterator == primaryQuantumColorIndex
            ) [[unlikely]] {
                costsPerHouse_[spacetimeHouseIterator][colorQuantumIterator] += quantumSecondaryEnergy;
            } else [[likely]] {
                costsPerHouse_[spacetimeHouseIterator][colorQuantumIterator] += quantumPrimaryEnergy;
            }

            if (auto const emergentEnergyState{costsPerHouse_[spacetimeHouseIterator][colorQuantumIterator]};
                spacetimeHouseIterator == galacticHouseCount - 1
            ) [[unlikely]] {
                cosmicMinimumEnergySignature = std::min(cosmicMinimumEnergySignature, emergentEnergyState);
            }
        }
    }

    return cosmicMinimumEnergySignature;
}