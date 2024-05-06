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
        ll a[n];
        vector<ll> v, w;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            if(a[i]>0)
            {
                v.push_back(a[i]);
            }
            else if(a[i]<0)
            {
                w.push_back(a[i]*(-1));
            }
        }
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        ll ans = 0, x = 0, y = 0;
        if(!v.empty())
        {
            if(v.size()<k)
            {
                x = v[v.size() - 1];
                ans += x;
            }
            else
            {
                x = v[v.size() - 1];
                for (int i = 0; i < v.size();i++)
                {
                    if(i==v.size()-1)
                    {
                        ans += v[i];
                    }
                    else if((v.size()-i-1)%k==0)
                    {
                        ans += (v[i] * 2);
                    }
                }
            }
        }
        if(!w.empty())
        {
            if(w.size()<k)
            {
                y = w[w.size() - 1];
                ans += y;
            }
            else
            {
                y = w[w.size() - 1];
                for (int i = 0; i < w.size();i++)
                {
                    if(i==w.size()-1)
                    {
                        ans += w[i];
                    }
                    else if((w.size()-i-1)%k==0)
                    {
                        ans += (w[i] * 2);
                    }
                }
            }
        }
        ans += min(x, y);
        cout << ans << endl;
    }
    return 0;
}