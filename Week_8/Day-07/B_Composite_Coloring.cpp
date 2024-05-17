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
        vector<int> rstl (n,0) , padd(50,-1) ;
        vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
        int tmp = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            for (int j = 0; j < v.size(); j++)
            {

                if (tmp % v[j] == 0)
                {
                    if (padd[v[j]] == -1)
                        count++, padd[v[j]] = count;
                    rstl[i] = padd[v[j]];
                    break;
                }
            };
            ;
    }
        cout << count << endl;
        for(auto x:rstl)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}