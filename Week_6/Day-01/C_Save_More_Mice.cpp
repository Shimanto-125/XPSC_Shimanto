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
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll cat = 0;
        ll ans = 0;
        for (int i = k - 1; i >= 0;i--)
        {
            ll mice = a[i];
            if(mice>cat)
            {
                ll d = n - mice;
                cat += d;
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}