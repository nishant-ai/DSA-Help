#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &a, int s, int l)
    {
        if (s == l)
        {
            return a[s];
        }
        if (s == (l - 1))
        {
            return max(a[s], a[l]);
        }
        int n = a.size();

        vector<int> dp(n, 0);
        dp[s] = a[s];
        dp[s + 1] = max(a[s], a[s + 1]);

        for (int i = s + 2; i <= l; i++)
        {
            dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
        }
        return dp[l];
    }

    int rob(vector<int> &a)
    {
        int n = a.size();
        if (n == 1)
        {
            return a[0];
        }
        if (n == 2)
        {
            return max(a[0], a[1]);
        }
        if (n == 3)
        {
            return max(a[0], max(a[1], a[2]));
        }
        return max(solve(a, 1, n - 1), a[0] + solve(a, 2, n - 2));
    }
};