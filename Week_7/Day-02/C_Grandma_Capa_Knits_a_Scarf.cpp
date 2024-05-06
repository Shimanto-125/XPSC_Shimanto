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
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < n;i++)
        {
            st.insert(s[i]);
        }
        vector<ll> ans(26, LLONG_MAX);
        for(auto x:st)
        {
            int l = 0, h = n - 1;
            ll cnt = 0;
            while(l<h)
            {
                if(s[l]==s[h])
                {
                    l++;
                    h--;
                }
                else 
                {
                    if(s[l]==x)
                    {
                        l++;
                        cnt++;
                    }
                    else if(s[h]==x)
                    {
                        h--;
                        cnt++;
                    }
                    else
                    {
                        cnt = -1;
                        break;
                    }
                }
            }
            if(cnt!=-1)
            {
                ans[x - 'a'] = cnt;
            }
        }
        sort(ans.begin(), ans.end());
        if(ans[0]==LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans[0] << endl;
        }
    }
    return 0;
}