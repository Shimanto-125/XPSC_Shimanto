#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0,ans = INT_MAX;
    ll sum = 0;
    while(r<n)
    {
        sum += a[r];
        if(sum>=s)
        {
            A:
            ans = min(ans, r-l+1);
            sum -= a[l];
            l++;
            if(sum>=s)
            {
                goto A;
            }
            
            r++;
        }
        else
        {
            
            r++;
        }
    }
    if(ans==INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    

    return 0;
}