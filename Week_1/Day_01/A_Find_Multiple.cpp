//https://atcoder.jp/contests/abc220/tasks/abc220_a
//Accepted...atcoder
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if(c>=a && c<=b)
    {
        cout << c << "\n";
    }
    else if(c<a)
    {
        int x = b / c;
        int ans = c * x;
        if(ans>=a)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    else
    {
        cout << -1 << "\n";
    }

    return 0;
}