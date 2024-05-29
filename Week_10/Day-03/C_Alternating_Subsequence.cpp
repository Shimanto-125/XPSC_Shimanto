#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        set<ll> s;
        ll i= 1;
        ll sum =0;
        while(i<=n){
            if(a[i]<0){
                while(a[i]<0 && i<=n){
                    s.insert(a[i]);
                    i++;
                }
            }else{
                while(a[i]>0 && i<=n){
                    s.insert(a[i]);
                    i++;
                }
            }
            auto it = s.rbegin();
            sum = sum + *it;
            s.clear();
        }
 
        cout<<sum<<"\n";
    }
    return 0;
}