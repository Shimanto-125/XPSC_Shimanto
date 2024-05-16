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
        ll gcd_odd = 0, gdc_even = 0;
        for (int i = 0; i < n;i++)
        {
            if(i%2!=0)
            {
                gcd_odd = __gcd(gcd_odd, a[i]);
            }
            else
            {
                gdc_even = __gcd(gdc_even, a[i]);
            }
        }
        bool x = false, y = false;
        for (int i = 0; i < n;i+=2)
        {
            if(a[i]%gcd_odd==0)
            {
                x = true;
                break;
            }
        }
        for (int i = 1; i < n;i+=2)
        {
            if(a[i]%gdc_even==0)
            {
                y = true;
                break;
            }
        }
        if(x && y)
            cout << 0 << endl;
        else if(!x)
        {
            cout << gcd_odd << endl;
        }
        else
        {
            cout << gdc_even << endl;
        }
    }
    return 0;
}