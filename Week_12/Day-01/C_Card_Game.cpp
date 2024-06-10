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
        vector<ll>a(n);
        ll pos_sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
                pos_sum+=a[i];
            }
        }
        ll ans=0,res=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]>0)
                {
                    res=max(res,pos_sum);
                    pos_sum-=a[i];
                }
                else
                {
                    res=max(res,pos_sum+a[i]);
                }
            }
            else
            {
                if(a[i]>0)
                {
                    pos_sum-=a[i];
                    res=max(res,pos_sum);
                }
                else
                {
                    res=max(res,pos_sum);
                }
            }
        }
        ans+=res;
        cout<<ans<<endl;
    }
    return 0;
}