#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unordered_map<ll, ll> mp;
	mp[0] = 0;
	for (long long int i = 1; i <= 10001; i++)
	{
		mp[i*i*i]++;
	}
    int T;
    cin >> T;
    while(T--)
    {
        ll x;
		cin>>x;
 
		ll c = cbrt(x);
 
		int f=0;
 
		for (ll i = 1; i <= 10000; i++)
		{
			if(f)
			break;
 
			ll z=i*i*i;
			if (z >= x)
				break;
 
			if (mp.find(x - z) != mp.end())
			{
				f = 1;
			}
		}
 
 
		if (!f){
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
    }
    return 0;
}