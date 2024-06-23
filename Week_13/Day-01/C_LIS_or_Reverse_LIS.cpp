#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
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
        int n;
        cin>>n;
        int x;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        int cnt1=0;
        int cnt2=0;
        for(auto it:mp)
        {
            if(it.second>1)
            {
                cnt1++;
                cnt2++;
            }
            else
            {
                if(cnt1>cnt2)cnt2++;
                else cnt1++;
            }
        }
        cnt2++;
        cout<<min(cnt1,cnt2)<<endl;
    }
    return 0;
}