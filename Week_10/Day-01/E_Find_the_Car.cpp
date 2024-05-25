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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k + 1), b(k + 1);
        for (int i = 1; i <= k;i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= k;i++)
        {
            cin >> b[i];
        }
        while(q--)
        {
            ll d;
            cin >> d;
            int idx = lower_bound(a.begin(),a.end(), d) - a.begin();
            if(a[idx]==d)
            {
                cout << b[idx] << " ";
            }
            else
            {
                ll x = a[idx] - a[idx - 1];
                ll y = b[idx] - b[idx - 1];
                cout << b[idx - 1] + ((d - a[idx - 1]) * y) / x << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}