/*
`
    Problem statement :
    - Given a word and a text, return the count of the occurrences of anagrams
      of the word in the text(For eg: anagrams of word for are for, ofr, rof etc.))

    Input :
        txt : forxxorfxdofr
        pat : for

    Output : 3
    - Explanation : Anagrams of the word for - for, orf,
      ofr appear in the text and hence the count is 3.

*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {

        // code here
        int ans = 0, k = pat.length(), n = txt.length();
        unordered_map<char, int> m;
        for (int i = 0; i < k; i++)
        {
            m[pat[i]]++;
        }
        int i = 0, j = 0, count = m.size();
        while (j < n)
        {
            if (m.find(txt[j]) != m.end())
            {
                m[txt[j]]--;
                if (m[txt[j]] == 0)
                {
                    count--;
                }
            }
            if (j - i + 1 < k)
                j++;
            else if (j - i + 1 == k)
            {
                if (count == 0)
                {
                    ans++;
                }
                if (m.find(txt[i]) != m.end())
                {
                    m[txt[i]]++;
                    if (m[txt[i]] == 1)
                        count++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends