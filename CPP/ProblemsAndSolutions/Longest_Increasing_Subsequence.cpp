// Question Link  :
// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
#include <bits/stdc++.h>
using namespace std;
int Recurssion_Solution(int n, int arr[], int ind, int prev)
{
    if (ind == n)
    {
        return 0;
    }
    int len = Recurssion_Solution(n, arr, ind + 1, prev);
    if (prev == -1 || arr[ind] > arr[prev])
    {
        return len = max(len, 1 + Recurssion_Solution(n, arr, ind + 1, ind));
    }
    return len;
}
int Memoiation_Solution(int n, int arr[], int ind, int prev , vector<vector<int>>&dp)
{
    if (ind == n)
    {
        return 0;
    }
    if(dp[ind][prev + 1] != -1){
        return dp[ind][prev + 1 ];
    }
    int len = Memoiation_Solution(n, arr, ind + 1, prev , dp);
    if (prev == -1 || arr[ind] > arr[prev])
    {
        len = max(len, 1 + Memoiation_Solution(n, arr, ind + 1, ind , dp));
    }
    dp[ind][prev + 1] = len;
}
int Tabulation_Solution(int n , int arr[] , vector<int>&dp)
{
    int ans = 1;
    for(int i = 1; i<n;i++){
        for(int j = 0 ;j<i;j++){
            if(arr[i] > arr[j] and dp[i] < dp[j] + 1){
                dp[i] = dp[j] + 1;
                ans = max(ans , dp[i]);
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>>memoiation_dp(n , vector<int>(n+1 , -1));
    vector<int>tabulation_dp(n , 1);
    // Recurssion Solution
    cout << Recurssion_Solution(n, arr, 0, -1) << endl;
    // Memoiation Solution
    cout<< Memoiation_Solution(n, arr, 0, -1 , memoiation_dp)<<endl;
    // Tabulation Solution
    cout<<Tabulation_Solution(n, arr,  tabulation_dp)<<endl;
    return 0;
}