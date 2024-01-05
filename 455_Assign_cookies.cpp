// link to the problem --> https://leetcode.com/problems/assign-cookies/description/?envType=daily-question&envId=2024-01-01

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0, cnt = 0;
        while (i < g.size() && j < s.size())
        {
            if (g[i] <= s[j])
            {
                i++;
                j++;
                cnt++;
            }
            else
                j++;
        }
        return cnt;
    }
};