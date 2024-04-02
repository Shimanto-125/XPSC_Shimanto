#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        ll n;
        cin >> n;
        ll i = n, sum = 0;
        while(i>=1)
        {
            sum += i;
            i = i / 2;
        }
        cout << sum << endl;
    }
    return 0;
}