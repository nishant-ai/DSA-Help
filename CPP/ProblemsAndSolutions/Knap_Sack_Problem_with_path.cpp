#include <bits/stdc++.h>

using namespace std;


int main()
{
    int total_items; // no. of items
    vector<int> value; // vector to store value of each item
    vector<int> weight; // vector to store weight of each item
    int Capacity;  // Capacity of knapsack
   
    cout << "Enter the total number of items : ";
    cin >> total_items;
    while(total_items < 0) // verifying whether given total_items positive or not
    {
        cout << "Enter a valid number of items(positive) : ";
        cin >> total_items; 
    }
    cout << "Enter capacity of knapsack : ";
    cin >> Capacity;
    while (Capacity < 0) // verifying whether given total_items positive or not
    {
        cout << "Enter a valid Capacity (positive) : ";
        cin >> Capacity;
    }

    if(total_items > 0) // if total items are zero no need to print below statement
    {
        cout << "Enter the values of items : "<< endl;
    }
    
    for(int i = 0; i < total_items ; i++) // Entering the values of each item
    {
        int ele; // just to store input from user and put in value vector
        cout << "Value of item "<< i+1 << " : " ;
        cin >> ele;
        value.push_back(ele);
    }

    if(total_items > 0) // if total items are zero no need to print below statement
    {
        cout << "Enter the weights of items : "<< endl;
    }
    
    for(int i = 0; i < total_items ; i++) // Entering the weights of each item
    {
        int ele; // just to store input from user and put in weight vector
        cout << "Weight of item "<< i+1 << " : " ;
        cin >> ele;
        weight.push_back(ele);
    }
  

    // creating matrix for storing maximum profit 
    //lets say if we include i items and have c capacity i.e. matrix[i][c] = max_profit
    // initialized matrix with 0s
    // specifically first row and first column as if capacity is 0 max_profit = 0
    // and if items = 0 --> max_profit = 0


    vector<vector<int>>matrix(total_items+1,vector<int>(Capacity+1,0)); 

    // filling the matrics
    for(int i = 1 ; i <= total_items ; i++)
    {
        for(int j = 1 ; j <= Capacity ; j++)
        {
            if(weight[i-1] <= j) // if item weight is less than capacity
            {
                // either we can include it or we dont include it 
                // depending upon which gives max value
                matrix[i][j] = max(matrix[i-1][j-weight[i-1]]+value[i-1],matrix[i-1][j]);
            }
            else
            {   // if weight of item is more than capacity then we wont include it
                matrix[i][j] = matrix[i-1][j];
            }
        }
    }


    vector<int> path; // to store weights of items that form solution
    int i = total_items; 
    int j = Capacity;
    while(i > 0 && j > 0)
    {
        if(matrix[i][j] == matrix[i-1][j]) // current item is not included as both have same value
        {
            i--;
        }
        else
        {
            // item is included in path as it contributes in max profit
            path.emplace_back(weight[i-1]);
            j -= weight[i-1];
            i--;
        }
    }
    reverse(path.begin(), path.end()); // since we started from last element we can reverse it
    cout << endl;
    cout << "Max profit value : " << matrix[total_items][Capacity]<< endl;
    cout << "Weights of items that form solution : " ;
    for(auto x : path)
    {
        cout << x << "  ";
    }
    cout << endl;
    return 0;
}
