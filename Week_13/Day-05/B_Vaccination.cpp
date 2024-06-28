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
        ll n,k,d,w;
        cin>>n>>k>>d>>w;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        ll valid,res=k;
        for(int i=0;i<n;i++)
        {
            if(i==0 || valid<a[i]|| res<1)
            {
                ans++;
                res=k;
                valid=a[i]+w+d;
            }
            res--;
        }
        cout<<ans<<endl;
    }
    return 0;
}