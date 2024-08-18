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
        string s,ans;
        cin>>s;
        if(s[0]=='9')
        {
            int c=0;
            for(int i=n-1;i>=0;i--)
            {
                int aux=s[i]-'0';
                aux+=c;
                if(aux>1)
                {
                    int y=11-aux;
                    ans+=(y+'0');
                    c=1;
                }
                else
                {
                    c=0;
                    int y=1-aux;
                    ans+=y+'0';
                }
            }
            reverse(ans.begin(),ans.end());
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                int x=s[i]-'0';
                int y=9-x;
                ans+=y+'0';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}