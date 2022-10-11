// Kadane Algorithm for Circular Array Sum

#include<iostream>
#include<climits>
using namespace std;

int Kadane(int a[],int n)
{
    a[n];
    int currentsum = 0 ;
    int maxsum = INT_MIN;
    for (int i = 0;i<n;i++)
    {
        currentsum += a[i];
        if(currentsum <0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum,currentsum);
    }
    return maxsum;
}

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int a[n];

    cout<<"Enter the array elemets: ";
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
  
    int wrapsum ;
    int nonwrapsum = Kadane(a,n);
    int totalsum = 0;

    for(int i = 0 ;i<n;i++)
    {
        totalsum += a[i];
        a[i] =-a[i];

    }
    wrapsum = totalsum + Kadane(a,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;

}