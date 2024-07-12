#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll i=0,j=n;
    while(i<=j)
    {
        ll a=i+(j-i)/2;
        //cout<<i<<" "<<j<<endl;
        if((((n-a)*(n-a+1))/2)-a==k)
        {
            cout<<a;
            break;
        }
        else if((((n-a)*(n-a+1))/2)-a<k)
        {
            j=a-1;
        }
        else
        {
            i=a+1;
        }
    }
    return 0;
}