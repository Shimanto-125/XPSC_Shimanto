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
        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n;i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}