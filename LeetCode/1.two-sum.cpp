/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int x = 0; x < nums.size(); x++)
        {
            for (int y = 0; y < nums.size(); y++)
            {
                if (nums[x] + nums[y] == target && x != y)
                {
                    return {x, y};
                }
            }
        }
        return {};
    }
};
// @lc code=end
