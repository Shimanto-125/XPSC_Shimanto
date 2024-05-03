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

// #include <bits/stdc++.h>
// #define fori(i, s, e) for (long long int i = s; i < e; i++)
// #define forei(i, s, e) for (long long int i = s; i <= e; i++)
// #define ford(i, s, e) for (long long int i = s; i > e; i--)
// #define fored(i, s, e) for (long long int i = s; i >= e; i--)
// #define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// #define endl "\n"
// #define ll long long int
// using namespace std;

// bool ok(int mid, int n, int x, int y)
// {
//     int a = (x / mid) + (y / mid);
//     return a >= n;
// }
// int main()
// {
//     fastread();
//     int n, x, y;
//     cin >> n >> x >> y;
//     int l = 1, r = min(x, y), ans, mid;
//     while (l <= r)
//     {
//         mid = l + (r - l) / 2;
//         if (ok(mid, n, x, y))
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }