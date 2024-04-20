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
        for (ll i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        ll bit[30] = {0};
        for (ll i = 0; i < 30;i++)
        {
            ll sol = (1ll << i);
            for (ll j = 0; j < n;j++)
            {
                if((a[j]&sol)!=0)
                {
                    bit[i]++;
                }
            }
        }
        for (ll m = 1; m <= n;m++)
        {
            bool ans = false;
            for (ll j = 0; j < 30;j++)
            {
                if(bit[j]%m!=0)
                {
                    ans = true;
                    break;
                }
            }
            if(!ans)
            {
                cout << m << " ";
            }
        }
        cout << endl;
    }
    return 0;
}