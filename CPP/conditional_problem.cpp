//link:  https://www.codechef.com/START59D/problems/SPECIALITY

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int s,t,e;
        cin>>s>>t>>e;
        if(s>t && s>e)
        cout<<"Setter"<<endl;
        else if(t>s && t>e)
        cout<<"Tester"<<endl;
        else
        cout<<"Editorialist"<<endl;
    }
	// your code goes here
	return 0;
}