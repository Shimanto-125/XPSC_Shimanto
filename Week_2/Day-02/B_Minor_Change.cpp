// https://atcoder.jp/contests/abc172/tasks/abc172_b
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0,cnt=0;
    while(i<s.size() && j<t.size())
    {
        if(s[i]!=t[j])
        {
            cnt++;
        }
        i++;
        j++;
    }
    cout << cnt << "\n";
    return 0;
}