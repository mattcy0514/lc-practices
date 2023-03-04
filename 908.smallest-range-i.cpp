/*
 * @lc app=leetcode id=908 lang=cpp
 *
 * [908] Smallest Range I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max = -1;
        int min = 10001;
        for (auto& num : nums) {
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
        if (k != 0)
            return (int) (max - min) / (2 * k) ? max - min - 2 * k : 0;
        return max - min;
    }
};
// @lc code=end

