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
        cin >>a >> b;
        if(b==1)
        {
            cout << "NO" << endl;
        }
        else if(b==2)
        {
            cout << "YES" << endl;
            if(a==1)
            {
                cout << 3 << " " << 1 << " " << 4 << endl;
            }
            else
            {
                b = b * a;
                ll x, y, z;
                z = a * b;
                y = a;
                x = z - y;
                cout << x << " " << y << " " << z << endl;
            }
        }
        else
        {
            ll x, y, z;
            cout << "YES" << endl;
            z = a * b;
            y = a;
            x = z - y;
            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}