#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int q;
    cin >> q;
    while(q--)
    {
        ll x, y;
        cin >> x >> y;
        auto it1 = lower_bound(a.begin(), a.end(), x);
        auto it2 = upper_bound(a.begin(), a.end(), y);
        cout << it2 - it1 << " ";
    }
    return 0;
}