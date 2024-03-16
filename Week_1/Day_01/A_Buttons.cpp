//atcoder problem(accepted)
//https://atcoder.jp/contests/abc124/tasks/abc124_a

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if(a==b)
    {
        cout << (a + b) << "\n";
    }
    else if(a>b)
    {
        cout << (a + (a - 1)) << "\n";
    }
    else
    {
        cout << (b + (b - 1)) << "\n";
    }

    return 0;
}