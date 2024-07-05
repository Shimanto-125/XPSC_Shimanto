#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>tmp;
    vector<int>fre(11);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(fre[(a[i]%10)]==0)
        {
            tmp.push_back(a[i]%10);
        }
        fre[a[i]%10]++;
    }
    int m=tmp.size();
    bool ans=false;
    if(fre[1]>=3)
    {
        ans=true;
    }
    for(int i=0;i<m;i++)
    {
        if(fre[tmp[i]]>=2)
        {
            for(int j=0;j<m;j++)
            {
                if(tmp[j]==tmp[i])
                {
                    continue;
                }
                if(((2*tmp[i])+tmp[j])%10==3)
                {
                    ans=true;
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(i!=j && j!=k && i!=k && (tmp[i]+tmp[j]+tmp[k])%10==3)
                {
                    ans=true;
                }
            }
        }
    }
    if(ans)
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