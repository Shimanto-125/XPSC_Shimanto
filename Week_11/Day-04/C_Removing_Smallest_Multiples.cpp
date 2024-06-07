#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s="$"+s;
        vector<int>vis(n+1,0);
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='1')
            {
                vis[i]=10;
            }
        }
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int k=i;k<=n;k+=i)
            {
                if(vis[k]==10)break;
                else if(vis[k]==0)
                {
                    vis[k]=1;
                    ans+=i;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}