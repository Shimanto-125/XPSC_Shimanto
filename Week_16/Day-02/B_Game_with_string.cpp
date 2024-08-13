#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    string s;
    cin>>s;
    stack<char>st;
    for(auto ch:s)
    {
        if(!st.empty() && st.top()==ch)
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }
    if(st.size()==s.length() || st.empty() || s.length()-st.size()%2==1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}