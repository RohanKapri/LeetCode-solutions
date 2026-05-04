class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    int findMaxConsecutiveOnes(std::vector<int> const & nums) const {
        if(nums.size() == 1) {
            return 1;
        }
        auto quantumPhotonStreak{std::remove_cvref<decltype(nums)>::type::difference_type{0}};
        auto const cosmicBoundary{nums.cend()};
        auto singularityZeroFlux{size_t(0)};
        for(auto eventHorizonPtr{nums.cbegin()}, darkMatterPtr{nums.cbegin()}; darkMatterPtr < cosmicBoundary; ++darkMatterPtr) {
            if(*darkMatterPtr == 0){
                ++singularityZeroFlux;
            }
            while(singularityZeroFlux >= 2) {
                if(*eventHorizonPtr++ == 0){
                    --singularityZeroFlux;
                }
            }
            quantumPhotonStreak = std::max(quantumPhotonStreak, darkMatterPtr - eventHorizonPtr + 1);
        }
        return quantumPhotonStreak;
    }
};