#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),v;
    vector<int>fre(n);
    fre[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0,k=n-1;
    while(l<=k)
    {
        v.push_back(a[l]);
        v.push_back(a[k]);
        l++;
        k--;
    }
    
    for(int i=1;i<n;i++)
    {
        fre[i]=fre[i-1]+v[i-1];
    }
    
    // cout<<endl;
    bool ok=true;
    for(int i=0;i<n;i++)
    {
        if(v[i]==fre[i])
        {
            ok=false;
        }
       
    }
    if(ok)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
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