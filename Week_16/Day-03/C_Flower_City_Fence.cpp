#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    map<ll,ll>mp1,mp2;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        a[i]=x;
        mp1[i]=x;
        mp2[x]=i;
    }
    for(ll i=1;i<=n;i++)
    {
        ll t=a[i];
        ll s=mp1[t];
        ll u=mp2[s];
        if(t!=u)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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