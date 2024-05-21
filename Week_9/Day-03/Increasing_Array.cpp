#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n;i++)
    {
        if(a[i]<a[i-1])
        {
            ans += abs(a[i] - a[i - 1]);
            a[i] = a[i - 1];
        }
        
    }
    cout << ans << endl;
    return 0;
}