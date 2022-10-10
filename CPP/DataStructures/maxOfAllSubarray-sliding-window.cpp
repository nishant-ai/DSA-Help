
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        queue<int> list;
        list.push(arr[0]);

        int i = 0, j = 0;
        while (j < n)
        {
            if (arr[j] >= list.front())
            {
                list.pop();
                list.push(arr[j]);
            }

            if (j - i + 1 < k)
                j++;

            else if (j - k + 1 == k)
            {
                ans.push_back(list.front());
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

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
} // } Driver Code Ends