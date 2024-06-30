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
        int ans=INT_MAX;
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            int num=(int)(s[i]-48)*10+(int)(s[i+1]-48);
            int sum=0;
            for(int j=0;j<i;j++)
            {
                if(s[j]=='0')
                {
                    flag=false;
                    break;
                }
                if(s[j]>='2')
                {
                    sum+=(int)s[j]-48;
                }
            }
            for(int j=i+2;j<n;j++)
            {
                if(s[j]=='0')
                {
                    flag=false;
                    break;
                }
                if(s[j]>='2')
                {
                    sum+=(int)s[j]-48;
                }
            }
            if(num==1 && sum>0)
            {
                num=sum;
            }
            else
            {
                num+=sum;
            }
            ans=min(ans,num);
        }
        if(!flag)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
    }
    return 0;
}