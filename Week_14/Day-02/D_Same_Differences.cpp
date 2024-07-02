#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        map<ll,ll>mp;
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            x-=i;
            mp[x]++;
        }
        ll ans=0;
        for(auto it:mp)
        {
            ll x=it.second;
            ans+=(x*(x-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}