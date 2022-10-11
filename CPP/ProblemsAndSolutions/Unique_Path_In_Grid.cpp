// Given a grid of size m * n, lets assume you are starting at (1,1) and your goal is to reach (m,n). 
//At any instance, if you are on (x,y), you can either go to (x, y + 1) or (x + 1, y).
// Now consider if some obstacles are added to the grids. How many unique paths would there be?
// An obstacle and empty space is marked as 1 and 0 respectively in the grid.

#include <bits/stdc++.h>

using namespace std;


void inputs(vector<vector<int>>& matrix , int &n,int &m) // To take input from user
{
    cout << "Enter the number of rows: ";
    cin >> n;

    while(n <= 0)
    {
        cout << "Enter valid (positive) number (n) : ";
        cin >> n;
    }

    cout << "Enter the number of columns: ";
    cin >> m;

    while(m <= 0)
    {
        cout << "Enter valid (positive) number (n) : ";
        cin >> m;
    }

    cout << "Enter the elements of matrix : "<< endl;
    for(int i = 0; i < n ; i++)
    {
        vector<int>arr;
        matrix.emplace_back(arr);
        for(int j = 0; j < m ; j++)
        {
            int element;
            cout << "Enter value of matrics[" << i << "][" << j << "] = "; 
            cin >> element;
            while(element != 0 && element != 1)
            {
                cout << "Enter a valid value (0/1) : ";
                cin >> element;
            }
            matrix[i].emplace_back(element);
        }
    } 
}


int solve(int i, int j , vector<vector<int>> A, vector<vector<int>>&t) // Memorization solution
{
    if(i == 1 && j == 1) // if we reach first grid from last grid
    {
        return 1;
    }
    if( i == 0 || j == 0) // if we go out of matrix
    {
        return 0;
    }
    
    if(t[i][j] != -1) // if value is already stored/memorized in matrix
    {
        return t[i][j];
    }
    
    if(A[i-1][j-1] == 1) // if obstacle found
    {
        t[i][j] = 0;
        return 0;
    }
    // Either we can move to up or left (Note starting from end and going ton start)
    t[i][j] = solve(i-1,j,A,t)+solve(i, j-1, A, t);
    return t[i][j];
}


int solution(vector<vector<int>>& matrix, int n, int m)
{
     if(matrix[0][0] == 1 || matrix[n-1][m-1] == 1)
    {
        // if first or last cell contains obstacle on way to reach
        return 0;
    }
    // creating matrix to store and use memorization technique
    vector<vector<int>>t(n+1, vector<int>(m+1,-1));
    return solve(n,m,matrix,t);
}

int main()
{
    vector<vector<int>> matrix;
    int n;
    int m;
    inputs(matrix,n,m);

    int result = solution(matrix,n,m);

    cout << "Total number of unique paths is/are : " << result << endl;

}