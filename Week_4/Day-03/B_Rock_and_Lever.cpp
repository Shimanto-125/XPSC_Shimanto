#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
ll bits(ll k)
{
    ll c = 0, d = 1;
    while(k!=0)
    {
        c++;
        k = k >> d;
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll> point(n);
        map<ll, ll> mp;
        for(ll i=0;i<n;i++)
        {
            point[i] = bits(a[i]);
            mp[point[i]]++;
        }
        ll tot = 0,x;
        map<ll, ll>::iterator it;
        for ( it = mp.begin(); it != mp.end();it++)
        {
            x = it->second;
            tot += (x * (x - 1)) / 2;
        }
        cout << tot << endl;
    }
}