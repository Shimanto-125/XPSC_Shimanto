#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    if(n==3)
    {
        cout<<"2 1 3"<<endl;
        return;
    }
    if(n%4==0)
    {
        ll x=(1ll<<30);
        ll cur=1;
        for(int i=1;i<=n/2;i++)
        {
            cout<<cur<<" "<<cur+x<<" ";
            cur++;
        }
        // cout<<endl;
        // return;
    }
    else if(n%2==1)
    {
        ll x=(1ll<<25);
        ll y=(1ll<<26);
        cout<<y<<" ";
        ll cur=1;
        for(int i=1;i<n/2;i++)
        {
            cout<<cur<<" "<<cur+x<<" ";
            cur++;
        }
        if((n/2)%2==0)
        {
            y+=x;
        }
        cout<<n/2<<" "<<n/2+y;
        // cout<<endl;
    }
    else
    {
        ll x=(1ll<<25);
        ll y=(1ll<<26);
        cout<<"0"<<" "<<y<<" ";
        ll cur=1;
        for(int i=1;i<=n/2-2;i++)
        {
            cout<<cur<<" "<<cur+x<<" ";
            cur++;
        }
        cout<<cur<<" "<<cur+x+y;
        // cout<<endl;
    }
    cout<<endl;
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