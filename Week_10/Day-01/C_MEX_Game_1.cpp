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
        vector<int> a(n),v(n+1,0);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            v[a[i]]++;
        }
        int res = 0;
        int ans;
        for (int i = 0; i < n;i++)
        {
            if(v[i]==0)
            {
                ans = i;
                break;
            }
            else if(v[i]==1)
            {
                if(res)
                {
                    ans = i;
                    break;
                }
                res++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}