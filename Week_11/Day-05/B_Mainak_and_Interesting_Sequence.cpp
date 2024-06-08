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
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        if((n>m)||((n%2==0) && (m&2!=0)))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            ll sum=0;
            cout<<"YES"<<endl;
            if(n%2==0 && m%2==0)
            {
                for(int i=0;i<n-2;i++)
                {
                    a[i]=1;
                    sum++;
                }
                a[n-2]=(m-sum)/2;
                a[n-1]=(m-sum)/2;
            }
            else if(n%2!=0)
            {
                for(int i=0;i<n-1;i++)
                {
                    a[i]=1;
                    sum++;
                }
                a[n-1]=m-sum;
            }
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}