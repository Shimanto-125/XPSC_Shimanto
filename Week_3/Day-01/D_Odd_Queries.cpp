#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        long long pre[n+1];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        pre[0] = 0;
        for (int i = 1; i <= n;i++)
        {
            pre[i] = pre[i - 1] + a[i - 1];
        }
            while (q--)
            {
                int l, r, k;
                cin >> l >> r >> k;
                long long x = pre[r] - pre[l - 1];
                long long d = (r - l + 1) * k;
                x = pre[n] - x;
                if ((x + d) % 2 != 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }

    }
    return 0;
}