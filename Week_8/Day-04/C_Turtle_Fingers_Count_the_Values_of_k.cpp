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
        ll l, a, b;
        cin >> a >> b >> l;
        ll x = 0;
        set<int> s;
        while(true)
        {
            if(int(pow(a,x))>l)
            {
                break;
            }
            if(l%(int(pow(a,x)))!=0) break;
            ll cur = l / int(pow(a, x));
            s.insert(cur);
            while(cur%b==0)
            {
                cur /= b;
                s.insert(cur);
            }
            x++;
        }
        int ans = s.size();
        cout << ans << endl;
    }
    return 0;
}