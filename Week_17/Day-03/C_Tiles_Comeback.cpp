#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n,k;
    cin>>n>>k;
    ll cnt=0,flag=0,tmp=n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]==a[n-1])
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[0])
            {
                cnt++;
            }
            if(cnt==k)
            {
                // break;
                cout<<"YES"<<endl;
                return;
            }
        }
        // if(cnt==k)
        // {
        //     cout<<"YES"<<endl;
        // }
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[0])
            {
                cnt++;
            }
            if(cnt==k)
            {
                tmp=i;
                cnt=0;
                break;
            }
        }
        for(int i=tmp+1;i<n;i++)
        {
            if(a[i]==a[n-1])
            {
                cnt++;
            }
            if(cnt==k)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return;
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