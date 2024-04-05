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
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }
        int ans = XOR;
        for (int i = 0; i < n;i++)
        {
            ans = min(ans, (XOR ^ a[i]));
        }
        cout << ans << endl;
    }
    return 0;
}