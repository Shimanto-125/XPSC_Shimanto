#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        int mx = sum;
        int res=sum;
        int k = 0;
        for(int j=i+1;j<n;j++)
        {
            res+=a[j];
            res-=a[k];
            k++;
            mx = max(mx,res);
        }
        v.push_back(mx);
    }
    for(int i=0;i<=n;i++)
    {
        int mx=0;
        for(int j=0;j<v.size();j++)
        {
            int res;
            if(i>j+1)
            {
                res=v[j]+x*(j+1);
            }
            else
            {
                res=v[j]+x*i;
            }
            mx=max(mx,res);
        }
        cout<<mx<<" ";
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