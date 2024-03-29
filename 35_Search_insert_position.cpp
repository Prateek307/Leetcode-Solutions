// link to the problem  ---> https://leetcode.com/problems/search-insert-position/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1, mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        // it means target is not found therefor we need to return the pos
        // at which it would have been present
        return low;
    }
};