#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll getPrime(ll n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2)
        return n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        ll l,r;
        cin>>l>>r;
        if(r <= 3) {
            cout<<-1<<endl;
        }
        else {
            if(l < r) {
                if(r%2 != 0) {
                    r--;
                }
                cout<<2<<" "<<r-2<<endl;
            }
            else { // l == r
                ll prime = getPrime(l);
                if(prime == l)
                    cout<<-1<<endl;
                else
                    cout<<prime<<" "<<l-prime<<endl;
            }
        }
    }
    return 0;
}