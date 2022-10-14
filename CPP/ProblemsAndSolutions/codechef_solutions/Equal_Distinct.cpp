// Problem Link: https://www.codechef.com/problems/EQDIS

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define Vec vector<long long int>

const long long int MOD = 1e9+7;

ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}

void solve(){
    int n;
    cin >> n;
    unordered_set <int> s;
    vector<int>v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    int size = s.size();
    if(n & 1 == 1 && n == size){
        cout<<"NO"<<"\n";
        return;
    }
    cout<<"YES"<<"\n";
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

