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
        cin>> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int sum=1;sum<=100;sum++)
        {
            int cnt=0;
            int i=0,j=n-1;
            while(i<j)
            {
                if(a[i]+a[j]>sum)j--;
                else if(a[i]+a[j]<sum)i++;
                else
                {
                    cnt++;
                    i++;j--;
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}