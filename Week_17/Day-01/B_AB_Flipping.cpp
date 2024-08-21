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
        string s;
        cin>>s;
        int ans=n-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')ans--;
            else
            {
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='A')ans--;
            else break;
        }
        if(ans>=0)cout<<ans<<endl;
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}