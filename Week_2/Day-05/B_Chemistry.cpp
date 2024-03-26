#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n;i++)
        {
            mp[s[i]]++;
        }
        int cnt = 0;
        for(auto it:mp)
        {
            if(it.second%2!=0)
            {
                cnt++;
            }
        }
        if(k>=cnt-1 )
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