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
        ll n,i,k,sz,j;
        string s;
        std::vector<ll> v;
        cin>>n>>k;
        cin>>s;
        
        for(i=0;i<n;i++)
        {
            if(s[i]=='1') v.push_back(i+1);
        }
        ll cnt=0;
        if(v.size()==0)
        {
            for(i=1;i<=n;i+=(k+1))
            cnt++;
        }
        
        else
        {
            for(i=v[v.size()-1]+(k+1);i<=n;i+=(k+1))
            {
                cnt++;
            }
        
            for(i=1;i<=(v[0]-(k+1));i+=(k+1))
            {
                cnt++;
            }
        
            ll ft,sd,dif;
            for(i=0;i<v.size()-1;i++)
            {
                ft=v[i];
                sd=v[i+1];
                for(j=ft+(k+1);j<=sd-(k+1);j+=(k+1))
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}