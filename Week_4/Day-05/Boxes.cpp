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
        vector<ll> v;
        map<ll, int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i=0;i<n;i++)
        {
            ll x = (log2(a[i]) + 1);
            mp[x]++;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << (mp[v.back()] + 1) / 2 << endl;
    }
    return 0;
}