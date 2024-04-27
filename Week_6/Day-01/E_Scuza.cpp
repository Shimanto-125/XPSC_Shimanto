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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1,0);
        a[0] = 0;
        for (int i = 1; i <= n;i++)
        {
            cin >> a[i];
        }
        vector<ll> pre(n + 2, 0);
        for (int i = 1; i <= n;i++)
        {
            pre[i] = a[i] + pre[i - 1];
        }
        vector<ll> ans(q);
        vector<pair<ll, int>> k(q);
        for (int i = 0; i < q;i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        int p = 0;
        for (int i = 0; i < q;i++)
        {
            while(1)
            {
                if(p==n || a[p+1]>k[i].first)
                {
                    break;
                }
                p++;
            }
            ans[k[i].second] = pre[p];
        }
        for (int i = 0; i < q;i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}