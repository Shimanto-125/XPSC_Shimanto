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
        ll n, k;
        cin >> n >> k;
        for (int i = 1; i <= (log2(n) + 1);i++)
        {
            ll x = pow(2, i);
            ll y = (n + (x / 2)) / x;
            if(k<=y)
            {
                if(k==1)
                {
                    cout << x / 2 << endl;
                    break;
                }
                else
                {
                    ll ans = (x / 2) + ((k - 1) * x);
                    cout << ans << endl;
                    break;
                }
            }
            else
            {
                k -= y;
            }
        }
    }
    return 0;
}