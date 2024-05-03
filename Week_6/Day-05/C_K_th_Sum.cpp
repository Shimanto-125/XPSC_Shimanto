#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<ll> prefixA(n + 1), prefixB(n + 1);
        for(int i = 0; i < n; i++) {
            prefixA[i + 1] = prefixA[i] + a[i];
            prefixB[i + 1] = prefixB[i] + b[i];
        }
        ll low = 0, high = 1e10;
        while(high-low>1) {
            ll mid = (low + high) / 2;
            ll cnt = 0;
            for(int i = 0; i < n; i++) {
                auto pos = upper_bound(a.begin(), a.end(), mid - b[i]) - a.begin();
                cnt += pos;
            }
            if(cnt >= k) {
                high = mid;
            } else {
                low = mid;
            }
        }
        cout << high << "\n";
    return 0;
}