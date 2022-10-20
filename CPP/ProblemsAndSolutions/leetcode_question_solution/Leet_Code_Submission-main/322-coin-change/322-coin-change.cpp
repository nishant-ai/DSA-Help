class Solution
{
public:
    int coinChange(vector<int> &a, int amount)
    {
        if (amount == 0)
        {
            return 0;
        }
        vector<int> dp(amount + 1, 100001);
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= amount)
            {
                dp[a[i]] = 1;
            }
        }
        for (int tar = 1; tar <= amount; tar++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] < tar && (tar - a[j]) <= amount)
                {
                    dp[tar] = min(dp[tar], dp[tar - a[j]] + 1);
                }
            }
        }
        if (dp[amount] == 100001)
        {
            return -1;
        }
        return dp[amount];
    }
};