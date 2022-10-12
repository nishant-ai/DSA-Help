//link:https://www.codechef.com/OCT221D/problems/BINARYSUB

#include<bits/stdc++.h>

using namespace std;
int main(){
    
    long long int test;
    cin >> test;
    for(int j=0;j<test;j++){
        string substr;
        cin >> substr;
        
        long long int sz=substr.size();
       long long int ar1[sz+1];
        ar1[sz]=1;
        ar1[sz-1]=1;
        for(int i=sz-2 ; i>=0 ; i--)
        {
            if(substr[i]!=substr[i+1]){
                ar1[i] = ( ar1[i+2] + ar1[i+1] ) % 998244353;
            }
            
            else{
                
            ar1[i]=ar1[i+1];
            }
        }
        
        cout<<ar1[0]%998244353<<"\n";
    }
}