#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < (1 << n);i++)
    {
        int res = 0, m = 0;
        int mn = INT_MAX, mx = INT_MIN;
        for (int j = 0; j < n;j++)
        {
            if(i&(1<<j))
            {
                m++;
                res += a[j];
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
            }
        }
        if(m>=2 && res>=l && res<=r && abs(mx-mn)>=x)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}