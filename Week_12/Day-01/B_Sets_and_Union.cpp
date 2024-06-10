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
        vector<int>a[n];
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            a[i].resize(k);
            for(int j=0;j<k;j++)
            {
                cin>>a[i][j];
                s.insert(a[i][j]);
            }
        }
        int ans=0;
        for(int ex=1;ex<=50;ex++)
        {
            set<int>temp;
            for(int i=0;i<n;i++)
            {
                bool vis=true;
                for(int j=0;j<a[i].size();j++)
                {
                    if(a[i][j]==ex)
                    {
                        vis=false;
                        break;
                    }
                }
                if(vis)
                {
                    for(int j=0;j<a[i].size();j++)
                    {
                        temp.insert(a[i][j]);
                    }
                }
            }
            if(temp!=s)
            {
                ans=max(ans,(int)temp.size());
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}