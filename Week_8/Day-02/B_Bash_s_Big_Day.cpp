#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    int mx = 1;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if(a[i]!=1)
        {
            mx = max(mx, mp[a[i]]);
        }
    }
    if(n==1)
    {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 0; i < n;i++)
    {
        for (int j = 2; j * j <= a[i];j++)
        {
            if(a[i]%j==0)
            {
                mp[j]++;
                mx = max(mx, mp[j]);
                if(a[i]/j!=j)
                {
                    mp[a[i] / j]++;
                    mx = max(mx, mp[a[i] / j]);
                }
            }
        }
    }
    cout << mx << endl;
    // return 0;
}