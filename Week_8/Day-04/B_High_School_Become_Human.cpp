#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll x, y;
    cin >> x >> y;
    if(x==y)
    {
        cout << "=" << endl;
        return 0;
    }
    double a, b;
    a = y * log(x);
    b = x * log(y);
    if(a==b)
    {
        cout << "=" << endl;
    }
    else if(a>b)
    {
        cout << ">" << endl;
    }
    else
    {
        cout << "<" << endl;
    }
    return 0;
}