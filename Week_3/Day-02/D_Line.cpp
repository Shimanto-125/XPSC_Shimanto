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
        vector<ll> v;
        ll total=0;
        int minimumChange=0;
        for(int i=0;i<n;i++){
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L){
                    minimumChange++;
                    total+=R;
                    v.push_back(R-L);
                }
                else
                {
                    total+=L;
                }
            }
            else
            {
                if(L>R){
                    minimumChange++;
                    v.push_back(L-R);
                    total+=L;
                }
                else{
                    total+=R;
                }
            }
        }
        vector<ll> ans(n+1);
        for(int i=minimumChange;i<=n;i++)
        {
            ans[i]=total;
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=minimumChange-1;i>=1;i--)
        {
            total-=v.back();
            v.pop_back();
            ans[i]=total;
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}