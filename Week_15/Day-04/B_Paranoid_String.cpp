#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll sol=n;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
            sol+=i;
        }
    }
    cout<<sol<<endl;
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