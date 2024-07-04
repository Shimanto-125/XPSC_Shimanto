#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int N=1e5+1;
vector<ll>a(N);
vector<ll>pre(N+1);
int dp[N+1];
int n;
ll l,r;
ll sub_seq(int idx)
{
    if(idx==n)
    {
        return 0;
    }
    if(dp[idx]!=-1)
    {
        return dp[idx];
    }
    int st=idx,lst=n-1;
    int i=-1;
    while(st<=lst)
    {
        int mid=(st+lst+1)/2;
        if(pre[mid+1]-pre[idx]>=l)
        {
            lst=mid-1;
            i=mid;
        }
        else
        {
            st=mid+1;
        }
    }
    if(i!=-1 && pre[i+1]-pre[idx]<=r)
    {
        return dp[idx]=max(1+sub_seq(i+1),sub_seq(idx+1));
    }
    else
    {
        return dp[idx]=sub_seq(idx+1);
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
        // int n,l,r;
        cin>>n>>l>>r;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pre[0]=0;
        for(int i=1;i<n+1;i++)
        {
            pre[i]=pre[i-1]+a[i-1];
        }
        for(int i=0;i<n+1;i++)
        {
            dp[i]=-1;
        }
        ll ans=sub_seq(0);
        cout<<ans<<endl;
    }
    return 0;
}