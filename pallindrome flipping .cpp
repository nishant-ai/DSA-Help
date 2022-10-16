#include <iostream>
using namespace std;

int main() {
int t; 
cin>>t; 
  while(t--){
    int n;
    cin>>n; 
    string b; 
    cin>>b;
    int zeros=0,ones=0;
    for(int i=0;i<n;i++){
       if(b[i]=='0') 
         zeros+=1;
       else
         ones+=1;
  }
  if(zeros%2==0 or ones%2==0)
    cout<<"Yes"<<endl;
  else
    cout<<"N0"<<endl;
}
return 0;
}
