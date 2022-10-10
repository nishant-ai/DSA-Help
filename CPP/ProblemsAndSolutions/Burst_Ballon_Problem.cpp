// Question Link  :
// https://leetcode.com/problems/burst-balloons/

#include <bits/stdc++.h>
using namespace std;

int Memoiation_Solution(vector<vector<int>>&dp , vector<int>a , int i , int j){
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans = INT_MIN;
    for(int k = i;k<=j;k++){
        int cost = a[k] * a[i-1] * a[j+1] + Memoiation_Solution(dp , a , i , k-1) + Memoiation_Solution(dp ,a , k+1 , j);
        ans = max(ans , cost);
    }
    return dp[i][j] = ans;
}


int Tabulation_Solution(vector<int>a){
    int n = a.size();
    a.push_back(1);
    a.insert(a.begin() , 1);
    vector<vector<int>>dp(n + 2 , vector<int>(n + 2, 0));
    for(int i = n;i>=1 ;i--){
        for(int j = 1 ; j<=n;j++){
            if(i>j) continue;
            int ans = INT_MIN;
            for(int k = i;k<=j;k++){
                int cost = a[k] * a[i-1] * a[j+1] + dp[i][k-1] + dp[k+1][j];
                ans = max(ans , cost);
            }
            dp[i][j] = ans;
        }
    }
    return dp[1][n];
}

int mem_solution(int n , vector<int>arr){
    arr.push_back(1);
    arr.insert(arr.begin() , 1);
    vector<vector<int>>memoiation_dp(n + 2 , vector<int>(n+2 , -1));
    return Memoiation_Solution(memoiation_dp , arr, 1 , n);
}

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Memoiation Solution
    cout<< mem_solution(n , arr) <<endl;
    // Tabulation Solution
    cout<<Tabulation_Solution(arr)<<endl;
    return 0;
}