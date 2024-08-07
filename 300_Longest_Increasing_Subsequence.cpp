// link to the problem ---> https://leetcode.com/problems/longest-increasing-subsequence/

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int i;
        vector<int> ans;
        ans.push_back(nums[0]);
        for (i = 0; i < nums.size(); i++)
        {
            if (ans.back() < nums[i])
                ans.push_back(nums[i]);
            else
            {
                int index = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }
};