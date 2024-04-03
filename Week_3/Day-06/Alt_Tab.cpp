#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    stack<string> st;
    if (n == 1)
    {
        string s;
        cin >> s;
        cout << s[s.size() - 2] << s[s.size() - 1] << endl;
    }
    else
    {
        for (ll j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            st.push(s);
        }
        unordered_set<string> a;
        while (!st.empty())
        {
            if (a.find(st.top()) == a.end())
                cout << st.top()[(st.top()).size() - 2] << st.top()[(st.top()).size() - 1];
            a.insert(st.top());
            st.pop();
        }
        cout << endl;
    }
    return 0;
}