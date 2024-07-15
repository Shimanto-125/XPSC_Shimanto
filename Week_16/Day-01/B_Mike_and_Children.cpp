#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int fre[200005]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=0;
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            fre[a[i]+a[j]]++;
            mx=max(mx,fre[a[i]+a[j]]);
        }
    }
    cout<<mx<<endl;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}