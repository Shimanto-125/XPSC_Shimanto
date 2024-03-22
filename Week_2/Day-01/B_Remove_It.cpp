// https://atcoder.jp/contests/abc191/tasks/abc191_b
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    vector<int> v;
    for (int i = 0; i < n;i++)
    {
        if(a[i]!=x)
        {
            v.push_back(a[i]);
        }
    }
    for (int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
        return 0;
}