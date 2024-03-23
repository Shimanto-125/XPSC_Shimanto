// https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; i <= n;i++)
    {
        for (int j = 0; j <= n;j++)
        {
            int c = k - i - j;
            if(c>=0 && c<=n)
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}