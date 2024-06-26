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
        int n,k;
        cin>>n>>k;
        vector<ll>a(n);
        vector<ll>v;
        ll res=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            res+=a[i]/k;
            v.push_back(a[i]%k);
        }
        sort(v.begin(),v.end());
        int i=00,j=n-1;
        while(i<j)
        {
            if(v[i]+v[j]>=k)
            {
                res++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}