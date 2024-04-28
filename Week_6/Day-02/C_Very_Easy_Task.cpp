#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool right(int t, int n, int x, int y)
{
    if (t < min(x, y))
        return false;
    int cnt = 1;
    t -= min(x, y);
    cnt += t / x + t / y;
    return cnt >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    int l = 0, r = max(x, y) * n, mid;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (right(mid, n, x, y))
            r = mid;
        else
            l = mid;
    }
    cout << r;
    return 0;
}