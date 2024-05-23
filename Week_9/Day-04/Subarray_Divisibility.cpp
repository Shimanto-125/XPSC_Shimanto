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
    {
        cin >> a[i];
    }
    ll sum = 0;
    map<ll, int> mp;
    mp[0]++;
    ll cnt = 0;
    for (int i = 0; i < n;i++)
    {
        sum += a[i]%n;
        sum = (sum + n) % n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}