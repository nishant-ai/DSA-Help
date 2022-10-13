//Problem statement link: https://www.codechef.com/problems/ATM2


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        int arr[a],sum=0;
        for(int j=0;j<a;j++){
            cin>>arr[j];
            sum=sum+arr[j];
            if(sum<=b)
            cout<<"1";
            else{
                sum=sum-arr[j];
            cout<<"0";
            }
            
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
