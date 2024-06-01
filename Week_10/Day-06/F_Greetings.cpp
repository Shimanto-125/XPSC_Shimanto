#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        pbds<pair<ll,ll>>p;
        
        pbds<ll>b;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x,y;
            cin>>x>>y;
            p.insert({x,y});
            b.insert(y);
        }
        ll ans=0;
        for(auto it:p)
        {
            ll val=it.second;
            ans+=b.order_of_key(val);
            b.erase(b.find(val));
        }
        cout<<ans<<endl;
    }
    
    return 0;
}