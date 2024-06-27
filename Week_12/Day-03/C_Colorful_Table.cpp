#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    vector<int>mx(n+3),mn(n+3);
    int boro=0,choto=INT_MAX;
    for(int i=v.size()-1;i>=0;i--)
    {
        boro=max(boro,v[i].second);
        mx[i]=boro;
        choto=min(choto,v[i].second);
        mn[i]=choto;
    }
    map<int,int>mp;
    for(int i=0;i<v.size();i++)
    {
        int idx=i+1;
        int x=mx[i]-mn[i]+1;
        int val=v[i].first;
        mp[val]=max(mp[val],x*2);
    }
    for(int i=1;i<=k;i++)
    {
        cout<<mp[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}