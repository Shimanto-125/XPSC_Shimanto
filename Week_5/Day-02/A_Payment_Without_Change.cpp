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
        int a, b, c, s;
        cin >> a >> b >> c >> s;
        ll r=s%c;
 
        if(r<=b and a*c+b>=s)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}