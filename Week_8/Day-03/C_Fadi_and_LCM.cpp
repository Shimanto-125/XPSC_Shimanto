#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll x;
    cin >> x;
    ll mx = LLONG_MIN;
    ll mn = LLONG_MAX;
    for (ll i = 1; i * i <= x;i++)
    {
        if(x%i==0 && ((i*x/i)/__gcd(i,x/i))==x)
        {
            mx = max(i, x / i);
            mn = min(mn, mx);
        }
    }
    cout << x / mn << " " << mn << endl;
    return 0;
}