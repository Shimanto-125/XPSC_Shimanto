#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
const ll N = 100000;
vector<ll> prime;
void seive()
{
    vector<bool> prm(N+1, true);
    for (ll i = 2; i * i <= N;i++)
    {
        if(prm[i])
        {
            for (ll j = i + i; j <= N;j+=i)
            {
                prm[j] = false;
            }
        }
    }
    for (ll i = 2; i < N;i++)
    {
        if(prm[i])
        {
            prime.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    seive();
    int T;
    cin >> T;
    while(T--)
    {
        
        ll d;
        cin >> d;
        ll ans1, ans2;
        bool val1, val2, res;
        val1 = true;
        val2 = false;
        res = false;
        for (ll i = 0; i < 1000000;i++)
        {
            if(prime[i]-1>=d && val1)
            {
                val1 = false;
                ans1 = prime[i];
                val2 = true;
            }
            else if(prime[i]-ans1>=d && val2)
            {
                ans2 = prime[i];
                res = true;
                break;
            }
        }
        if(res)
        {
            cout << ans1 * ans2 << endl;
        }
    }
    return 0;
}