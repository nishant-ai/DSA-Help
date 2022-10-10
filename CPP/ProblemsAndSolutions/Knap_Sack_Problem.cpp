// Question Link  :
// https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos
#include <bits/stdc++.h>
using namespace std;
int Memoiation_Solution(int ind, int Weight[], int Value[], vector<vector<int>> &dp , int maxWeight)
{
    if(maxWeight == 0){
        return 0;
    }
    if (ind == 0)
    {
        if(Weight[0] == maxWeight){
            return Value[0];
        }else{
            return -1e9;
        }
    }
    if (dp[ind][maxWeight] != -1)
    {
        return dp[ind][maxWeight];
    }
    int take = 0;
    int notTake = 0 + Memoiation_Solution(ind -1 , Weight , Value , dp , maxWeight);
    if (Weight[ind] <= maxWeight)
    {
        take = Value[ind] + Memoiation_Solution(ind -1 , Weight , Value , dp , maxWeight - Weight[ind]);
    }
    return dp[ind][maxWeight] = max(take , notTake);
}
int Tabulation_Solution(int n, int Weight[], int Value[], vector<vector<int>> &dp , int maxWeight)
{
    for(int i = Weight[0] ; i<=maxWeight ;i++){
        dp[0][i] = Value[0];
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<=maxWeight;j++){
            int take = INT_MIN;
            int not_take = 0 + dp[i-1][j];
            if(Weight[i]<=j){
                take = Value[i]+dp[i-1][j-Weight[i]];
            }
            dp[i][j] = max(take , not_take);
        }
    }
    return dp[n-1][maxWeight];
}
int main()
{
    int n;
    cin >> n;
    int Weight[n];
    int Value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> Value[i];
    }
    int maxWeight;
    cin >> maxWeight;
    vector<vector<int>> memoiation_dp(n, vector<int>(maxWeight + 1, -1));
    vector<vector<int>> tabulation_dp(n, vector<int>(maxWeight + 1, 0));
    // Memoiation Solution
    cout << Memoiation_Solution(n - 1, Weight, Value, memoiation_dp , maxWeight) << endl;
    // Tabulation Solution
    cout<<Tabulation_Solution(n , Weight , Value ,  tabulation_dp , maxWeight)<<endl;
    return 0;
}