#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    pbds<ll>p;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll result=0;
    map<ll,ll>mp;
    for(int i=n-1;i>=0;i--)//inversion store for every value
    {
        ll y=p.order_of_key(a[i]);
        mp[a[i]]=y;
        p.insert(a[i]);
    }
    pbds<ll>q;
    q.insert(a[0]);
    for(int i=1;i<n-1;i++)//find larger value from left
    {
        ll y=q.order_of_key(a[i]);
        q.insert(a[i]);
        ll big=i-y;
        result+=(big*mp[a[i]]);
    }
    cout<<result<<endl;
    
    return 0;
}