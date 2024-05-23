#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    map<ll, ll> mp;
    ll cnt = 0, sum = 0;
    mp[sum] = 1;
    for (int i = 0; i < n;i++)
    {
        int k;
        cin >> k;
        sum += k;
        cnt += mp[sum - x];
        mp[sum]++;

    }
    cout << cnt << endl;
    return 0;
}