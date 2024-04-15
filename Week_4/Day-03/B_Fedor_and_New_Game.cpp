#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);
    for (int i = 0;i <= m;i++) {
        cin >> a[i];
    }

    vector<vector<int>> all_mask;
    for (int mask = 0;mask <= m;mask++) 
    {
        vector<int> v;
        for (int k = 0;k < n;k++) 
        {
            if ((a[mask] >> k) & 1) 
            {
                v.push_back(1);
            }
            else 
            {
                v.push_back(0);
            }
        }
        all_mask.push_back(v);
    }

    int ans = 0;
    vector<int> fm = all_mask[m];
    for (int i = 0;i < all_mask.size() - 1;i++) 
    {
        vector<int> v = all_mask[i];
        int cnt = 0;
        for (int k = 0;k < n;k++) 
        {
            if (fm[k] != v[k]) 
            {
                cnt++;
            }
        }
        if (cnt <= k) {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}