#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    const int N = 1e5 + 2;
    int vis[N];
    vector<int> adj[N];

    vector<int> indeg(n, 0);

    vector<int> ans;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        // x-->y
        adj[x].push_back(y);
        indeg[y]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && indeg[i] == 0)
        {
            ans.push_back(i);
            while (!adj[i].empty())
            {
                indeg[adj[i].front()]--;
                adj[i].pop_back();
            }
            vis[i] = 1;
        }
    }

    cout << "Topological Sort: ";
    vector<int>::iterator it;

    for (it = ans.begin(); it != ans.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}