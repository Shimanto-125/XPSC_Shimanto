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
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        ll total = n * (n + 1) / 2;
        ll curr = 0;
        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            curr += x;
        }
        v.push_back(total - curr);
        k = k % (n + 1);
        for (int i = 0; i < n;i++)
        {
            int y = (i - k + n + 1) % (n + 1);
            cout << v[y] << " ";
        }
        cout << endl;
    }
    return 0;
}