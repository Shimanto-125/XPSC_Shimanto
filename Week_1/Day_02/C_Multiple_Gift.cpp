#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y;
    cin >> x >> y;
    vector<ll> v;
    v.push_back(x);
    for (ll i = x; i <= y;i++)
    {
        ll n = v.size();
        if(v[n]%i==0)
        {
            v.push_back(i);
        }
    }
    cout << v.size() << endl;
    return 0;
}

