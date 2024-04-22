#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int fn(string x,string y,int m,int n)
{
    int res = 0;
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m;i++)
    {
        for (int j = 0; j <= n;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0;
            }
            else if(x[i-1]==y[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                res = max(res, dp[i][j]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return res;
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
        string x, y;
        cin >> x >> y;
        int s = x.size();
        int r = y.size();
        int res = fn(x, y, s, r);
        // cout << res << endl;
        cout << s - res + r - res << endl;
    }
    return 0;
}