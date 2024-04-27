#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll T;
    cin >> T;
    while(T--)
    {
        ll n, x,r=0,l=1;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        r = 1e10;
        while(l<(r-1))
        {
            ll mid = l + (r-l) / 2;
            ll total = 0;
            for (ll i = 0; i < n;i++)
            {
                if(a[i]<mid)
                {
                    total += (mid - a[i]);
                }
            }
            if(total>x)
            {
                r = mid;
            }
            else
            {
                l = mid ;
            }
        }
        cout << l << endl;
    }
    return 0;
}