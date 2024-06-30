#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    x++;
    k--;
    while(x!=y)
    {
        if(x%y==0)
        {
            while(x%y==0)
            {
                x/=y;
            }
        }
        if(k==0)
        {
            cout<<x<<endl;
            return;
        }
        ll tmp=y-x%y;
        if(tmp<=k)
        {
            x+=tmp;
            k-=tmp;
        }
        else
        {
            cout<<x+k<<endl;
            return;
        }
    }
    cout<<1+k%(y-1)<<endl;
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