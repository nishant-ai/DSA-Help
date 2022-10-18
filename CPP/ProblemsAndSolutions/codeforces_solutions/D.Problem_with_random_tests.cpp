#include <bits/stdc++.h>
using namespace std;
#define  enl          '\n'
#define  int          long long
#define  sz(s)        (int)s.size()
#define  all(v)       (v).begin(),(v).end()

mt19937 rng (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> ostream& operator<< (ostream &cout, pair<A, B> const &p) { return cout << "(" << p.first << ", " << p.second << ")"; }
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin >> p.first; return cin >> p.second;}
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}
template <typename A, typename B> A amax (A &a, B b){ if (b > a) a = b ; return a; }
template <typename A, typename B> A amin (A &a, B b){ if (b < a) a = b ; return a; }

const long long mod = 1e9+7;
const long long inf = 1e18;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    reverse(all(s));

    while(!s.empty() and s.back()=='0') s.pop_back();

    reverse(all(s));

    if(s.empty()) {
        cout<<"0\n";
        return;
    }

    n = sz(s);

    int id = -1;

    for(int i=0;i<n;i++) {
        if(s[i] == '0') {
            id = i;
            break;
        }
    }

    if(id == -1) {
        cout<<s<<enl;
        return;
    }

    id = n-id;

    string ans = s;

    if(n < 2000) {
        for(int i=0;i<=n-id;i++) {
            string s1 = s;
            string s2 = s.substr(i,id);
            for(int x=0;x<id;x++) {
                if(s2[id-x-1] == '1') s1[n-x-1] = '1';
            }
            amax(ans,s1);
        }
    }
    else {
        for(int i=0;i<=50;i++) {
            int idd = rng()%(n-id+1);
            string s1 = s;
            string s2 = s.substr(idd,id);
            for(int x=0;x<id;x++) {
                if(s2[id-x-1] == '1') s1[n-x-1] = '1';
            }
            amax(ans,s1);
        }
    }

    cout<<ans<<enl;
} 

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int testcases = 1;
    //cin>>testcases;
    while(testcases--) solve();
    return 0;
}
