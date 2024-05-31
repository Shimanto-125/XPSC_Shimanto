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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pbds<int>p;
    for(int i=0;i<k;i++)
    {
        p.insert(a[i]);
    }
    ll old_mid=*p.find_by_order((k+1)/2-1);
    ll dif=0;
    for(int i=0;i<k;i++)
    {
        dif+=abs(a[i]-old_mid);
    }
    cout<<dif;
    for(int i=0;i<n-k;i++)
    {
        p.erase(p.find_by_order(p.order_of_key(a[i])));
        p.insert(a[i+k]);
        ll mid=*p.find_by_order((k+1)/2-1);
        dif+=abs(a[i+k]-mid)-abs(old_mid-a[i]);
        if(k%2==0)
        {
            dif-=(mid-old_mid);
        }
        old_mid=mid;
        cout<<" "<<dif;
    }
    cout<<endl;
    return 0;
}