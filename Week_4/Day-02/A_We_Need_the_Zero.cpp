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
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        int x = 0;
        for (int i = 0; i < n;i++)
        {
            x ^= a[i];
        }
        for (int i = 0; i < n;i++)
        {
            a[i] ^= x;
        }
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s ^= a[i];
        }
        if(s==0)
        {
            cout << x << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}