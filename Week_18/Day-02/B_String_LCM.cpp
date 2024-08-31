#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    string s,t,x,y;
    cin>>s>>t;
    x=s,y=t;
    while(1)
    {
        if(x.size()==y.size())
        {
            if(x==y)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
            return;
        }
        else if(x.size()<y.size())
        {
            x+=s;
        }
        else
        {
            y+=t;
        }
    }
    return;
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