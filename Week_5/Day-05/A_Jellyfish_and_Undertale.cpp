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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        ll total = b-1;
        int c = 1;
        for (int i = 0; i < n;i++)
        {
            total = total + min(c + v[i], a) - 1;
        }
        cout << total+1 << endl;
    }
    return 0;
}