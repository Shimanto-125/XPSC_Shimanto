#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
vector<ll>v;
void mul()
{
    ll mul=1;
    for(int i=1;i<=62;i++)
    {
        v.push_back(mul);
        mul=mul*2;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mul();
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        string s,p;
        s=to_string(n);
        ll s_size=s.size(),v_size=v.size();
        ll mn=INT_MAX;
        for(int i=0;i<v_size;i++)
        {
            string x=to_string(v[i]);
            ll x_size=x.size();
            ll idx=0,cnt=0;
            for(int j=0;j<s_size;j++)
            {
                if(s[j]==x[idx])
                {
                    idx++;
                }
            }
            ll ans=s_size-idx+x_size-idx;
            mn=min(mn,ans);
        }
        cout<<mn<<endl;
    }
    return 0;
}