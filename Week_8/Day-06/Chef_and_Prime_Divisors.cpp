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
        ll a, b;
        cin >> a >> b;
        map<ll, ll> mp;
        for (ll i = 2; i * i <= b;i++)
        {
            if(b%i==0)
            {
                while(b%i==0)
                {
                    mp[i]++;
                    b /= i;
                }
            }
        }
        if(b>1)
        {
            mp[b]++;
        }
        bool ans = true;
        for(auto x:mp)
        {
            if(a%x.first!=0)
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}