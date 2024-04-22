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
        vector<int> a(n);
        for (int i = 0; i < n;i++)
            cin >> a[i];
        bool ans = false;
        for (int i = 1; i < n - 1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                ans = true;
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i + 2 << endl;
                break;
            }
        }
        if(!ans)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}