// https://codeforces.com/problemset/problem/1703/C
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n;i++)
        {
            int k;
            cin >> k;
            char c[k];
            for (int j = 0; j < k;j++)
            {
                cin >> c[j];
                if(c[j]=='D')
                {
                    a[i] = (a[i] + 1) % 10;
                }
                else
                {
                    if((a[i]-1)<0)
                    {
                        a[i] = (10 + a[i] - 1) % 10;
                    }
                    else
                    {
                        a[i] = (a[i] - 1) % 10;
                    }
                }
            }
        }
        for (int i = 0; i < n;i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}