#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
vector<int>sol(32770);

void solve()
{
    sol[0]=0;
    for(int i=1;i<=32768;i++)
    {
        int ans=32768-i;
        int n=i,cnt=0;
        while(n!=0)
        {
            n=(2*n)%32768;
            cnt++;
        }
        sol[i]=min(ans,cnt);
        for(int j=max(0,i-16);j<=i-1;j++)
        {
            sol[j]=min(sol[j],sol[i]+(i-j));
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<sol[n]<<endl;
    }
    return 0;
}