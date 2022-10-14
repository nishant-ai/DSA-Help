// Problem Link: https://www.codechef.com/problems/MINSM

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
#define pp pop_back
#define Vec vector<long long int>
const long long int MOD = 1e9+7;

int gcd(int a,int b){

    if(b == 0) return a;

    return gcd(b % a,a);

}

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i = 0;i < n;i++){
        cin>>v[i];
    }
    ll sum = v[0];
    for(ll i = 1;i < n;i++){
        sum = gcd(sum,v[i]);
    }
    cout<<sum * n<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

