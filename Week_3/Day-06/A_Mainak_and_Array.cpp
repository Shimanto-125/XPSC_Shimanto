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
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        int mx = a[n - 1] - a[0];
        for (int i = 1; i < n;i++)
        {
            mx = max(mx, (a[i] - a[0]));
        }
        for (int i = 0; i < n - 1;i++)
        {
            mx = max(mx, (a[n - 1] - a[i]));
        }
        for (int i = 1; i < n;i++)
        {
            mx = max(mx, (a[i-1] - a[i]));
        }
        cout << mx << endl;
    }
    return 0;
}