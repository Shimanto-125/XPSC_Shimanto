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
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        int res = 0, s = a[0];
        for (int i = 0; i < n;i++)
        {
            res |= a[i];
        }
        for (int i = 1; i < n;i++)
        {
            s &= a[i];
        }
        cout << res - s << endl;
    }
    return 0;
}