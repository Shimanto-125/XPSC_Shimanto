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
        int x,n,m;
        cin>>x>>n>>m;
        while(x>20 && n>0)
        {
            x=x/2 +10;
            n--;
        }
        bool flag=false;
        while(x>0 && m>0)
        {
            x=x-10;
            m--;
            if(x<=0)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}