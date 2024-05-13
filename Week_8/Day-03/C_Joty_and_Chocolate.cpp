#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll lcm(ll a, ll b)
{
    return ((a * b) / __gcd(a, b));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll ans = 0;
    ll y = n / lcm(a, b);
    ans = ((n / a) - y) * p + ((n / b) - y) * q + max(p, q) * y;
    cout << ans << endl;
    return 0;
}