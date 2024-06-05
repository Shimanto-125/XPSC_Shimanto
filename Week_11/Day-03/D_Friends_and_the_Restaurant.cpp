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
        vector<int>a(n,0);
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a[i]-=x;
        }
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a[i]+=x;
        }
        sort(a.rbegin(),a.rend());
        int ans=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(a[l]>-1 && a[r]>-1)
            {
                ans++;
                l++;
                r--;
            }
            else if(a[l]<0 && a[r]<0)
            {
                break;
            }
            else if(a[l]>-1)
            {
                if(a[l]>=abs(a[r]))
                {
                    ans++;
                    l++;
                    r--;
                }
                else
                {
                    r--;
                }
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}