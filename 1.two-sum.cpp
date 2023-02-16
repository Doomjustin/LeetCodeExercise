/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

#include <vector>
#include <unordered_map>


// @lc code=start
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> aux_map{};

        for (int i = 0; i < nums.size(); ++i) {
            if (aux_map.find(target - nums[i]) == aux_map.end())
                aux_map.emplace(nums[i], i);
            else
                return { aux_map[target - nums[i]], i };
        }

        return { -1, -1 };
    }
};
// @lc code=end
