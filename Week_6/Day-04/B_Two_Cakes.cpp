#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    int l = 1, r = min(x, y),ans,mid;
    auto possible = [&](int mid, int n, int x, int y)
    {
        int value = x / mid + y / mid;
        return value >= n;
    };

    while(l<=r)
    {
        mid = l + (r - l) / 2;
        if(possible(mid,n,x,y))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}