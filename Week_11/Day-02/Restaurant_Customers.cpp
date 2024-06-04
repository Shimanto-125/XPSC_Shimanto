#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>>a;
    for(int  i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back({x,1});
        a.push_back({y,-1});
    }
    sort(a.begin(),a.end());
    int ans=0;
    int mx=0;
    for(int i=0;i<a.size();i++)
    {
        ans+=a[i].second;
        mx=max(mx,ans);
    }
    cout<<mx<<endl;
    return 0;
}