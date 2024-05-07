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
        vector<ll> a;
        for (int i = 1; i <= n;i++)
        {
            a.push_back(2 * i);
        }
        for (int i = 0; i < a.size();i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}