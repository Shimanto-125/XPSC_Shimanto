#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size();i++)
    {
        mp[s[i]]++;
    }
    int cnt = 0;
    char c;
    for(auto x:mp)
    {
        if(x.second%2!=0)
        {
            c = x.first;
            cnt++;
        }
    }
    if((s.size()%2==0 && cnt>0)||cnt>1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        string sol = "";
        for(auto x:mp)
        {
            for (int i = 1; i <= x.second / 2;i++)
            {
                sol += x.first;
            }
        }
        cout << sol;
        if(s.size()%2!=0)
        {
            cout << c;
        }
        reverse(sol.begin(), sol.end());
        cout << sol;
        cout << endl;
    }
    return 0;
}
