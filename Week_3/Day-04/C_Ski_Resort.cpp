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
        int n, k;
        ll q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        ll r = 0, ans = 0,cons=0;
        while(r<n)
        {
            if(a[r]<=q)
            {
                cons++;
                if(r==n-1 || a[r+1]>q)
                {
                    if(cons>=k)
                    {
                        ll x = cons-k + 1LL;
                        ll add = x * (x + 1LL) / 2LL;
                        ans += add;
                        
                    }
                    cons = 0;
                }
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}

