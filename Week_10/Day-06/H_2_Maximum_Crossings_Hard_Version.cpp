#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pbds<ll>p;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            p.insert(a[i]);
            ll x=p.order_of_key(a[i]);
            ll y=p.size()-x-1;
            ans+=y;
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}