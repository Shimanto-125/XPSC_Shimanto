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
        string s, p;
        cin >> s >> p;
        int cnt1 = 0, cnt2 = 0;
        unordered_map<char, int> mp;
        mp['S'] = 1, mp['M'] = 2, mp['L'] = 3;
        for(auto x:s)
        {
            cnt1++;
        }
        for(auto x:p)
        {
            cnt2++;
        }
        if(s.back()==p.back() && s.back()=='S')
        {
            if(cnt1>cnt2)
            {
                cout << "<" << endl;
            }
            else if(cnt1<cnt2)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else if(s.back()==p.back())
        {
            if(cnt1>cnt2)
            {
                cout << ">" << endl;
            }
            else if(cnt1<cnt2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if(mp[s.back()]>mp[p.back()])
            {
                cout << ">" << endl;
            }
            else if(mp[s.back()]<mp[p.back()])
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
    return 0;
}