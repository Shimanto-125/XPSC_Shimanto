//https://atcoder.jp/contests/abc222/tasks/abc222_a

//Accepted....atcoder problem

#include<bits/stdc++.h>
using namespace std;

string integerToString(int n)
{
    if(n==0)
    {
        return "0";
    }
    string res;
    while(n>0)
    {
        char dgt = '0' + (n % 10);
        res = dgt + res;
        n /= 10;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    string ans = integerToString(a);
    while(ans.length()<4)
    {
        ans = "0" + ans;
    }
    cout << ans << "\n";
    return 0;
}

