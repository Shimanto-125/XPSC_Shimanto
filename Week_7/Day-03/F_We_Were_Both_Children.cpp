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
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        vector<ll> freq(n + 1, 0);
        for (int i = 0; i < n;i++)
        {
            if(a[i]>n)
            {
                continue;
            }
            freq[a[i]]++;
        }
        ll ans = 0;
        for (int i = 1; i <= n;i++)
        {
            ll sum = 0;
            for (int x = 1; x * x <= i;x++)
            {
                if(i%x==0)
                {
                    sum += freq[x];
                    if(x*x!=i)
                    {
                        sum += freq[i / x];
                    }
                }
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}