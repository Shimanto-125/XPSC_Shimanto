#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll minus = 0;
        ll ans = 0, mn = LLONG_MAX;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            if(a[i]<0)
            {
                minus++;
            }
            ans += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }
        if(minus%2==1)
        {
            ans -= 2ll * mn;
        }
        cout << ans << endl;
    }
    return 0;
}