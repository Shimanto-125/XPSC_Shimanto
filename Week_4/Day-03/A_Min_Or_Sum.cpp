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
        ll sr = 0;
        for (int i = 0; i < n;i++)
        {
            sr |= a[i];
        }
        cout << sr << endl;
    }
    return 0;
}