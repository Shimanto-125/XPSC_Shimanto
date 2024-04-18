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
        int n;
        cin >> n;
        cout << n << " " << n - 1 << endl;
        cout << (n ^ (n - 1)) * (n | (n - 1)) << endl;
    }
    return 0;
}