#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ll i=0;
        vector<ll>a;
        a.push_back(n);
        while((1<<i)<n)
        {
            if(n&(1<<i))
            {
                n=n^(1<<i);
                a.push_back(n);
            }
            i++;
        }
        while(n>1)
        {
            a.push_back(n/2);
            n/=2;
        }
        cout<<a.size()<<endl;
        for(auto val:a)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}