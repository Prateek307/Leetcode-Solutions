// link to the problem ---> https://leetcode.com/problems/array-partition/submissions/1272238597/class Solution {

    
public:
int arrayPairSum(vector<int> &n)
{
    int ans = 0;
    sort(n.begin(), n.end());
    for (int i = 0; i < n.size(); i += 2)
        ans += n[i];
    return ans;
};