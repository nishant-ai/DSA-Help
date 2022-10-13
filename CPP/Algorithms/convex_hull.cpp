#include <bits/stdc++.h>
using namespace std;
#define enl '\n'
#define int long long
#define sz(s) (int)s.size()
#define all(v) (v).begin(),(v).end()
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 

const int mod = 1e9+7;
const int inf = 1e18;

struct Point {
    int x,y;

    Point() {}

    Point(int x,int y) {
        this->x = x;
        this->y = y;
    }

    bool operator==(const Point &o) const {
        if(o.x==x and o.y==y) return true;
        return false;
    }
};

double slope(const Point &a,const Point &b) {
    if(a.x == b.x) return inf;
    return (double)(b.y-a.y)/(double)(b.x-a.x);
}

bool comp_slope(const Point &a,const Point &b,const Point &c) {
    return slope(b,c) < slope(a,b);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n;
    cin>>n;
    
    vector<Point>points;

    for(int i=0;i<n;i++) {
        int x,y;
        cin>>x>>y;
        points.push_back({x,y});
    }

    sort(all(points),[&](const Point &a,const Point &b) {
        if(a.x == b.x) return a.y < b.y;
        return a.x < b.x;
    });

    vector<Point>convex_hull_down;

    for(const auto &u:points) {
        if(sz(convex_hull_down)<2) {
            convex_hull_down.push_back(u);
        }
        else {
            while(sz(convex_hull_down)>1 and comp_slope(convex_hull_down[sz(convex_hull_down)-2],convex_hull_down.back(),u)) {
                convex_hull_down.pop_back();
            }
            convex_hull_down.push_back(u);
        }
    }

    vector<Point>convex_hull_upper;
    for(int i=n-1;i>=0;i--) {
        if(sz(convex_hull_upper)<2) {
            convex_hull_upper.push_back(points[i]);
        }
        else {
            while(sz(convex_hull_upper)>1 and comp_slope(convex_hull_upper[sz(convex_hull_upper)-2],convex_hull_upper.back(),points[i])) {
                convex_hull_upper.pop_back();
            }
            convex_hull_upper.push_back(points[i]);
        }
    }

    vector<Point>convex_hull;

    for(const auto &u:convex_hull_down) {
        convex_hull.push_back(u);
    }
    
    for(const auto &u:convex_hull_upper) {
        if(u==convex_hull_down.back() or u==convex_hull_down[0]) continue;
        convex_hull.push_back(u);
    }

    cout<<sz(convex_hull)<<enl;

    for(const auto &u:convex_hull) {
        cout<<u.x<<" "<<u.y<<enl;
    }

    return 0;
}