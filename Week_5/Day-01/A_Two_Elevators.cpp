#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = abs(a - 1);
        int y = abs(b - c) + (c - 1);
        if(x==y)
        {
            cout << 3 << endl;
        }
        else if(x>y)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}