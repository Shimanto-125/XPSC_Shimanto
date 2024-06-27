#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    map<ll,int>mp;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
        sum+=a[i];
    }
    priority_queue<ll>pq;
    pq.push(sum);
    bool pos=true;
    while(!pq.empty())
    {
        ll res=pq.top();
        pq.pop();
        ll x=res/2;
        ll y=res-(res/2);
        if(mp[x]>0)
        {
            mp[x]--;
        }
        else if(mp[x]==0 and x>1)
        {
            pq.push(x);
        }
        if(mp[y]>0)
        {
            mp[y]--;
        }
        else if(mp[y]==0 and y>1)
        {
            pq.push(y);
        }
        if(pq.size()>n+2)
        {
            pos=false;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]>0)
        {
            pos=false;
            break;
        }
    }
    if(pos)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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