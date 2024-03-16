//https://atcoder.jp/contests/abc125/tasks/abc125_a
//accepted...atcoder problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;
    if(a>t)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << (t / a) * b << "\n";
    }
    return 0;
}