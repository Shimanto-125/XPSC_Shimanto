#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll mod=1e9+7;
bool Possible(vector<ll> a,ll n,ll d,ll c,ll k){
    if(k==0){
        return (a[0]*d>=c);
    }
    ll sum=0,gain=0;
    if(k>=n){
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
    }
    else{
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
    }
 
    ll times=d/k;
 
    gain=times*sum;
 
    ll rem=d%k;
 
    if(rem>=n){
        for(int i=0;i<n;i++){
            gain+=a[i];
        }
    }
    else{
        for(int i=0;i<rem;i++){
            gain+=a[i];
        }
    }
 
    return (gain>=c);
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
        
        int n;                  
        cin>>n;
        ll c,d;                 
        cin>>c>>d;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        sort(a.begin(),a.end(),greater<ll>());
        ll total=0;             
        for(int i=0;i<min(n,(int)d);i++){
            total+=a[i];
        }
        if(total>=c){
            cout<<"Infinity"<<endl;
            continue;
        }
 
        ll ans=-1,low=0,high=(ll)1000000000000;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(Possible(a,n,d,c,mid+1)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
 
        if(ans==-1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}