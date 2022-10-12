class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            char c = i + 'A';
            int start = 0, end = 0;
            int count = 0;
            while (end < n)
            {
                if (s[end] != c)
                {
                    count++;
                }
                while (count > k)
                {
                    if (s[start] != c)
                    {
                        count--;
                    }
                    start++;
                }
                ans = max(end - start + 1, ans);
                end++;
            }
        }
        return ans;
    }
};