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
        ll p = 0, neg = 0;
        for (int i = 0; i < n;i++)
        {
            ll x;
            cin >> x;
            if(x>=0)
                p += x;
            else
            {
                if(p+x>=0)
                    p += x;
                else
                {
                    x += p;
                    p = 0;
                    neg += x;
                }
            }
        }
        cout << -neg << endl;
    }
    return 0;
}