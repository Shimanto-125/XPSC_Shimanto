#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
const ll MOD = 1e9 + 7;
ll power(ll n,ll i)
{
    ll result=1;
    while(i)
    {
        if(i%2==1)
        {
            result = (result * n) % MOD;
            i--;
        }
        else
        {
            n = (n * n) % MOD;
            i /= 2;
        }
    }
    return result % MOD;
}
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
        vector<int> v;
        while(k)
        {
            if(k%2==0)
                v.push_back(0);
            else
            {
                v.push_back(1);
            }
            k /= 2;
        }
        ll ans=0;
        for (ll i = 0; i < v.size();i++)
        {
            if(v[i]==1)
            {
                ll x = power(n, i);
                
                ans += x;
            }
            ans %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}