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
        vector<ll> v(n);
        ll sum = 0, op = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        bool neg = false;
        int r = 0;
        while(r<(n+1))
        {
            if(neg)
            {
                if(r==n || v[r]>0)
                {
                    op++;
                    neg = false;
                }
            }
            else
            {
                if(v[r]<0)
                {
                    neg = true;
                }
            }
            r++;
        }
        cout << sum << " " << op << endl;
    }
    return 0;
}