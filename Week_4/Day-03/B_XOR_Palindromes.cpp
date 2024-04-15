#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n;                 
        cin>>n;
        string s;               
        cin>>s;
        string ans="";
        int gp=0;
        int xp=0;
        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r])
            {
                gp+=2;
            }
            else
            {
                xp++;
            }
            l++,r--;
        }
        for(int i=0;i<=n;i++)
        {
            int total=i;
            total-=xp;
            if(total<0)
            {
                ans.push_back('0');
                continue;
            }
            total=max((total%2),total-gp);
            total=max(0,total-(n%2));
            if(total==0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}