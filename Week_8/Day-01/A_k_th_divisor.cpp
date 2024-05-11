#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 1; i * i <= n;i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
            if((n/i)!=i)
            {
                a.push_back(n / i);
            }
        }
    }
    sort(a.begin(), a.end());
    if(k>a.size())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a[k - 1] << endl;
    }
    return 0;
}