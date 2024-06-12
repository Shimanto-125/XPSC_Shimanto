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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(a[i]==cnt)
                    cnt++;
                continue;
            }
            cnt++;
            if(a[i]==cnt)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}