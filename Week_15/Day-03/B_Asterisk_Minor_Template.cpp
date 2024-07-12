#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    string s,t;
    cin>>s>>t;
    if(s[0]==t[0])
    {
        cout<<"YES"<<endl;
        cout<<s[0]<<'*'<<endl;
        return;
    }
    if(s.back()==t.back())
    {
        cout<<"YES"<<endl;
        cout<<'*'<<s.back()<<endl;
        return;
    }
    if(s[s.length()-1]==t[t.length()-1])
    {
        cout<<"YES"<<endl;
        cout<<'*'<<s[s.length()-1]<<endl;
        return;
    }
    string ans="";
    for(int i=0;i<s.length()-1;i++)
    {
        for(int j=0;j<t.length()-1;j++)
        {
            if(s[i]==t[j] && s[i+1]==t[j+1])
            {
                ans="";
                ans.push_back(s[i]);
                ans.push_back(s[i+1]);
                break;
            }
        }
    }
    if(ans.length())
    {
        cout<<"YES"<<endl;
        cout<<'*'<<ans<<'*'<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}