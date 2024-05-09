#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll inversion(vector<int> a, int n)
{
    ll result = 0, one = 0;
    for (int i = 0; i < n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        else
        {
            result += one;
        }
    }
    return result;
}
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
        ll ans = inversion(a, n);
        int it = -1;
        for (int i = 0; i < n;i++)
        {
            if(a[i]==0)
            {
                a[i] = 1;
                it = i;
                break;
            }
        }
        ans = max(ans, inversion(a, n));
        if(it!=-1)
        {
            a[it] = 0;
        }
        for (int i = n-1; i >= 0;i--)
        {
            if(a[i]==1)
            {
                a[i] = 0;
                break;
            }
        }
        ans = max(ans, inversion(a, n));
        cout << ans << endl;
    }
    return 0;
}