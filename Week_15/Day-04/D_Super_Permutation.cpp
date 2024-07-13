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
    if(n%2==1)
    {
        cout<<-1<<endl;
        return;
    }
    int j=1;
    for(int i=n;i>0;i--)
    {
        if(i%2==1)
        {
            cout<<j<<" ";
            j+=2;
        }
        else
        {
            cout<<i<<" ";
        }
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