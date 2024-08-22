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
        ll a,b,n;
        cin>>a>>b>>n;
        // vector<int>a(n);
        ll sum=0;
        if(b>=a)
        {
            sum=a;
            b=a;
        }
        else
        {
            sum=b;
        }
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(x+1<=a)
            {
                sum+=x;
            }
            else
            {
                sum+=a-1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}