#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n==2)
    {
        cout<<2<<" "<<1<<endl;
        return;
    }
    vector<int>a(n,-1);
    a[n/2]=1;
    a[0]=3;
    a[n-1]=2;
    int gh=4;
    for(int i=1;i<=n-1;i++)
    {
        if(a[i]!=-1)continue;
        a[i]=gh++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
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