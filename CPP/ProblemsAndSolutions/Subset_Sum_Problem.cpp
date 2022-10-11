// Given an integer array A  of size N.
// You are also given an integer B, you need to find whether their exist a subset in A whose sum equal B.
// If there exist a subset then return 1 else return 0.

#include <bits/stdc++.h>

using namespace std;

void inputs(vector<int>&A,int &B,int &n) // Taking inputs from user
{
    cout << "Enter number of elements in array : ";
    cin >> n;
    while(n <= 0)
    {
        cout << "Enter a valid (positive) number of elements in array : ";
        cin >> n;
    }

    cout << "Enter the elements of array : "<< endl;
    for(int i = 0; i < n ; i++)
    {
        int element;
        cout << "Enter element " << i+1 << " : " ;
        cin >> element;
        A.emplace_back(element);
    }

    cout << "Enter the value of sum to find : ";
    cin >> B;

}

int solve(vector<int> &A, int B,int n) {
    
    // To find total sum of elements
    
    int sum = 0;
    for(auto x : A)
    {
        sum += x;
        if(sum == B) // if sum matches with given
        {
            // Solution found
            return 1;
        }
    }
    
    if(sum < B) // if total sum is less than given
    {
        // No solution exist
      
        return 0;
    }
    
    // creating a matrix (DP approach) 
    // To store whether solution exist for 
    // if sum given is j and for first i elements
    // i.e t[i][j] = solution exist or not
    vector<vector<int>>t(n+1, vector<int>(B+1,0)); 
    
    for(int i = 0; i <= n ; i++)
    {
        // initializing first column with 1
        // As if sum given is 0 it is possible if we just dont choose any element among i elements
        t[i][0] = 1; 
    }
    
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= B; j++)
        {
            if(A[i-1] <= j) // if element is less than sum 
            {
                // Either take the element or not depending on which gives 1 as ans
                t[i][j] = max(t[i-1][j-A[i-1]], t[i-1][j]); 
            }
            else
            {
                // if element is high then we cant take it
                t[i][j] = t[i-1][j];
            }
        }
    }
    
    return t[n][B];
}

int main()
{
    int n; // Size of vector
    vector<int> A;  // vector yo store elements
    int B; // required sum 
    // Taking inputs from the user
    inputs(A,B,n);
    int ans = solve(A,B,n); 
    if(ans == 1)
    {
        cout << "There exits solution!!!" << endl;
    }
    else
    {
        cout << "No Solution exist!!!" << endl;
    }
    return 0;
}