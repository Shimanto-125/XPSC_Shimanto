#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (ll i = l; i < r + 1;i+=2)
    {
        cout << i << " " << i + 1 << endl;
    }
        return 0;
}