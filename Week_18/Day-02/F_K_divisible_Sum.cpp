#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n,k;
            cin>>n>>k;
            if(n==1){
                cout<<k<<"\n";
                return;
            }
            if(n==k){
                cout<<1<<"\n";
                return;
            }
            if(n<k){
                int a=k/n;
                int b=k%n;
                if(b!=0) a++;
                cout<<a<<"\n";
                return;
            }
            else{
                int c=n/k;
                int d=n%k;
                if(d!=0) c++;
                k*=c;
                int a=k/n;
                int b=k%n;
                if(b!=0) a++;
                cout<<a<<"\n";
                return;
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