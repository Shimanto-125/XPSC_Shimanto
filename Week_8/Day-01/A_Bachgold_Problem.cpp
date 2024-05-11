#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n%2==0)
    {
        cout << n/2 << endl;
        for (int i = 1; i <= n / 2;i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        n = n - 3;
        cout << n / 2 + 1 << endl;
        for (int i = 1; i <= n/2;i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << " ";
    }
    cout << endl;
    return 0;
}
