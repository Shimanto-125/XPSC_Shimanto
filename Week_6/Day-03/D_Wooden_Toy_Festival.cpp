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
        vector<ll> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans;
        auto Possible=[&](ll x)->bool
        {
        int cnt=1;
        for(int l=0,r=l+1;r<n;)
        {
            if(a[l]+x+x>=a[r])
            {
                r++;
            }
            else
            {
                cnt++;
                l=r;
                r=l;
            }
        }
        return (cnt<4);
        };
        ll low = 0, h = 1e15;
        while(low<=h)
        {
            ll mid = low + (h - low) / 2LL;
            if(Possible(mid))
            {
                ans = mid;
                h = mid - 1LL;
            }
            else
            {
                low = mid + 1LL;
            }
        }
        cout << ans << endl;
    }
    return 0;
}