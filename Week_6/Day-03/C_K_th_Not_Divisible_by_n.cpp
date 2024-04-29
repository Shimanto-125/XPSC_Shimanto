#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
const double N = 1e9;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        ll n, k;
        cin >> n >> k;
        ll low = 1, high = INT_MAX;
        ll ans = 0;
        while(low<=high)
        {
            ll mid = (low + high) / 2;
            ll x = mid - mid / n;
            if(x>k)
            {
                high = mid - 1;
            }
            else if(x<k)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}