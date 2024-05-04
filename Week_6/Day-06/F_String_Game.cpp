#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n + 1);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n, mid;
    auto ok = [&](int mid) -> bool
    {
        vector<bool> b(n + 1);
        for (int i = 0; i < mid;i++)
        {
            b[a[i]] = true;
        }
        int j = 0;
        bool flag = false;
        for (int i = 0; i < n;i++)
        {
            if(t[i]==p[j] && !b[i+1])
            {
                j++;
            }
            if(j==m)
            {
                flag = true;
                break;
            }
        }
        return flag;
    };
    int ans = 0;
    while(l<=r)
    {
        mid = (l + r) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}