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
        int x;
        cin >> x;
        int a = 1 << __lg(x);
        cout << x-a <<" "<< a << endl;
    }
    return 0;
}