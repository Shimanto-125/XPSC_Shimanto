#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n),od,evn;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            evn.push_back(i+1);
        }
        else
        {
            od.push_back(i+1);
        }
    }
     if(od.size()>=3)
        {
            cout<<"YES"<<endl;
            cout<<od[0]<<" "<<od[1]<<" "<<od[2]<<endl;
        }
        else if(evn.size()>=2 and od.size()>=1)
        {
            cout<<"YES"<<endl;
            cout<<evn[0]<<" "<<evn[1]<<" "<<od[0]<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
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
        solve();
    }
    return 0;
}