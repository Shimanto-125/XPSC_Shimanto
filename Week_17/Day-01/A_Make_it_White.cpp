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
        int beg=0,end=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && beg==0)beg=i+1;
            if(s[i]=='B' && beg!=0)end=i+1;
        }
        cout<<abs(beg-end)+1<<endl;

    }
    return 0;
}