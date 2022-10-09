// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
   bool find3Numbers(int A[], int n, int X)
{
    //Your Code Here
    sort(A,A+n);
    
    for(int i=2;i<n;i++){
        int k=0;
        int j = i-1;
        while(k<j){
            auto sum = A[i] + A[k] + A[j];
            if(sum < X) k++;
            else if(sum == X) return true;
            else j--;
        }
    }
    return false;
}


};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends