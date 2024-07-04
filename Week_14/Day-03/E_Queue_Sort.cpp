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
        ll mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        int idx;
        for(int i=0;i<n;i++)
        {
            if(a[i]==mn)
            {
                idx=i;
                break;
            }
        }
        bool flag=false;
        for(int i=idx+1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            idx=-1;
        }
        cout<<idx<<endl;
    }
    return 0;
}