// link to the problem ---> https://leetcode.com/problems/first-missing-positive/description/

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        unordered_set<int> s(nums.begin(), nums.end());
        for (int i = 1; i < 2147483647; i++)
            if (s.find(i) == s.end())
                return i;
        return -1;
    }
};