#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ans=true;
        for(int i=1;i<n;i++)
        {
            if((max(a[i],a[i-1])-min(a[i],a[i-1]))>=2)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}