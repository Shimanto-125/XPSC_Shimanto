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
        vector<ll> a(n), pre(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        pre[0] = a[0];
        for (int i = 1; i < n;i++)
        {
            pre[i] = a[i] + pre[i - 1];
        }
        ll sum = pre[n - 1];
        ll mx = 0;
        for (int i = 0; i < n-1;i++)
        {
            mx = max(__gcd(pre[i], sum - pre[i]), mx);
        }
        cout << mx << endl;
    }
    return 0;
}