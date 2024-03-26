#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        map<ll, int> mp1,mp2;

        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            mp1[v[i]]++;
        }
        for(auto x:mp1)
        {
            mp2[x.second]++;
        }
        auto maxi = mp2.rbegin();
        int mx = maxi->first;
        int cnt = 0, ct = 0,diff = n - mx;
        
        while(diff>0)
        {
            ct++;
            cnt += mx;
            diff -= mx;
            mx *= 2;
        }
        if(diff<0)
        {
            cnt += diff;
        }
        cout << (cnt + ct) << endl;
    }
    return 0;
}