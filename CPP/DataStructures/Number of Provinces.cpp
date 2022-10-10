// PROBLEM Link : https://leetcode.com/problems/number-of-provinces/#:~:text=A%20province%20is%20a%20group,the%20total%20number%20of%20provinces.

/* Problem Statement : There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

Return the total number of provinces.*/

//Solution Code : 

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  private: 
     
    void dfs(int node, vector<int> adjLs[], int vis[]) 
    {
        
        vis[node] = 1; 
        for(auto it: adjLs[node]) 
        {
            if(!vis[it]) {
                dfs(it, adjLs, vis); 
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) 
    {
        vector<int> adjLs[V]; 
        
         
        for(int i = 0;i<V;i++) 
        {
            for(int j = 0;j<V;j++) {
                
                if(adj[i][j] == 1 && i != j) 
                {
                    adjLs[i].push_back(j); 
                    adjLs[j].push_back(i); 
                }
            }
        }
        int vis[V] = {0}; 
        int cnt = 0; 
        for(int i = 0;i<V;i++) 
        {
            
            if(!vis[i]) 
            {
               
                cnt++;
               dfs(i, adjLs, vis); 
            }
        }
        return cnt; 
        
    }
};

int main() {
    
    vector<vector<int>> adj
    {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

        
    Solution ob;
    cout << ob.numProvinces(adj,3) << endl;
        
    return 0;
}

/*  Eg. 1)

Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
Output: 2     

Eg. 2)
Input: isConnected = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3

*/