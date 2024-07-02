#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve() {
	string s1, s2;	
    cin >> s1 >> s2;
	ll result = s2.size();
	for (ll i = 0; i < s2.size(); i++) {
		ll c = i, k = i;
		for (ll j1 = 0; j1 < s1.size(); j1++) {
			if (s1[j1] == s2[k]) {
				k++;
				if (k == s2.size()) {
					break;
				}
			}
 
		}
		result = min(result, c + s2.size() - k);
	}
	cout << result + s1.size() << endl;
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