#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int x = 0;
    int y = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i] > b[i])
                x += a[i];
            else
                y += b[i];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==1 && b[i]==1)
        {
            if(x<y)
                x++;
            else
                y++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1 && b[i]==-1)
        {
            if(x<y)
                y--;
            else
                x--;
        }
    }
    cout<<min(x,y)<<"\n";
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