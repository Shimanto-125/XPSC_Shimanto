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
        vector<int> a(n+1);
        for (int i = 1; i <= n;i++)
        {
            cin >> a[i];
        }
        bool ans = true;
        for (int i = 1; i <= n;i++)
        {
            bool flag = false;
            for (int j = 2; j <= i + 1;j++)
            {
                if(a[i]%j!=0)
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                ans = false;
                break;
            }
        }
        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}