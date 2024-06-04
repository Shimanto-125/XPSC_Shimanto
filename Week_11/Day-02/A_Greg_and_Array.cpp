#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    vector<ll>p(100008),q(100008);
    vector<pair<int,int>>range(m+1);
    vector<ll>val(m+1);
    for(int i=1;i<=m;i++)
    {
        int l,r,x;
        cin>>l>>r>>x;
        range[i]={l,r};
        val[i]=x;
    }
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        q[x]++;
        q[y+1]--;
    }
    for(int i=1;i<=m;i++)
    {
        q[i]+=q[i-1];
    }
    for(int i=1;i<=m;i++)
    {
        val[i]=val[i]*q[i];
    }
    for(int i=1;i<=m;i++)
    {
        int l=range[i].first;
        int r=range[i].second;
        p[l]+=(val[i]);
        p[r+1]-=(val[i]);
    }
    for(int i=1;i<=n;i++)
    {
        p[i]+=p[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<p[i]+a[i]<<" ";
    }
    cout<<endl;
    return 0;
}