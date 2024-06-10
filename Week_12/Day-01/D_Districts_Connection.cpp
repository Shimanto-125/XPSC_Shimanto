#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    ll fst=a[0];
    ll y;
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=fst)
        {
            cout<<1<<" "<<i+1<<endl;
            y=i+1;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]==fst)
        {
            cout<<y<<" "<<i+1<<endl;
        }
    }
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