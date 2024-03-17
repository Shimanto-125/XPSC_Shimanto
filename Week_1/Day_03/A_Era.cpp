#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        int mx = 0;
        for (int i = 0; i < n;i++)
        {
            if(v[i]>(i+1))
            {
                mx = max(mx, v[i] - (i + 1));
            }
        }
        cout << mx << "\n";
    }

    return 0;
}