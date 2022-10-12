#include <iostream>
#include<math.h>
using namespace std;

int main() {
    long long int n;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n%2!=0)
        {
            n=n/2;
            cout<<n<<endl;
        }
        else
        {
            long long int s=n;
            int k=0;
            while(n%2==0)
            {
                n=n/2;
                k++;
            }
            long long int j=(pow(2,k+1));
            s=s/j;
            cout<<s<<endl;
        }
    }
	return 0;
}
