// https://codeforces.com/problemset/problem/1692/B
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
        int a[n];
        set<int> s;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int cnt = n, setSize = s.size();
        while(cnt>setSize)
        {
            cnt -= 2;
        }
        cout << cnt << endl;
    }

    return 0;
}