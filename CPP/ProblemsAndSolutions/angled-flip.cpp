//Question is that you are given two matrixes A and B. In one operation you can move an element along its diagonal or subdiagonal(in simple language, you can exchange any elements in the diagonals and sub-diagonals)
//you have to tell whether u can convert A into B or not

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int b[n][m];
        //for checking equal elements
        map<int,int> p;//map of a
        map<int,int> q;//map of b
        //for checking diagonals
        map<int,int> r;//for diagonal of a
        map<int,int> s;//for diagonal of b
        if(m%2==1)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>a[i][j]; p[a[i][j]]++;
                    if((i+j+1)%2==1) r[a[i][j]]++;
                }
            }

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>b[i][j]; q[b[i][j]]++;
                    if((i+j+1)%2==1) s[b[i][j]]++;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>a[i][j]; p[a[i][j]]++;
                    if((i%2==1 && j%2==1) || (i%2==0 && j%2==0)) r[a[i][j]]++;
                }
            }

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>b[i][j]; q[b[i][j]]++;
                    if((i%2==1 && j%2==1) || (i%2==0 && j%2==0)) s[b[i][j]]++;
                }
            }
        }

        //giving output
        if(n>1 && m>1)
        {
            if(p==q && r==s) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else{
            if(p==q) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}
