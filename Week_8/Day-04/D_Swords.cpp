#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = INT_MIN;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int gcd = 0;
    ll sum = 0;
    for(auto x:a)
    {
        gcd = __gcd(gcd, mx - x);
        sum += (mx - x);
    }
    ll ans;
    if(gcd==0)
    {
        ans = 0;
    }
    else
    {
        ans = sum / gcd;
    }
    cout << ans << " " << gcd << endl;
    return 0;
}