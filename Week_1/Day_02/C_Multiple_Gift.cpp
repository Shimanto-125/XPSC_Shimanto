#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y;
    cin >> x >> y;
    int ans = 0;
    ll i = x;
    while(i<=y)
    {
        ans++;
        i = i * 2;
    }
    cout << ans << "\n";
    return 0;
}

