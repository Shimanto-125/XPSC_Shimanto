#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int N = 1e6 +5;
typedef pair<int,int> pii;

int n,m;
int a[N];
int b[N];
int c[N];
vector<pii>all;
map<ll,ll>dp;
ll optimal_sol(int cur)
{
    if(dp.count(cur))
    {
        return dp[cur];
    }
    int l=0,h=all.size()-1;
    int idx=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(all[mid].second<=cur)
        {
            idx=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(idx==-1)
    {
        return dp[cur]=0;
    }
    ll diff=all[idx].first;
    ll need=all[idx].second;

    ll smith=(cur-need)/diff +1;
    ll left=cur-smith*diff;

    ll ans=smith*2+optimal_sol(left);

    return dp[cur]=ans;
}

void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        all.push_back({a[i]-b[i],a[i]});
    }
    sort(all.begin(),all.end());
    vector<pii>v;
    for(int i=0;i<n;i++)
    {
        if(v.empty())
        {
            v.push_back(all[i]);
            continue;
        }
        if(v.back().second>all[i].second)
        {
            v.push_back(all[i]);
        }

    }
    all=v;
    ll res=0;
    for(int i=0;i<m;i++)
    {
        res+=optimal_sol(c[i]);
    }
    cout<<res<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}