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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<>());
        vector<ll> pre(n, 0);
        pre[0] = a[0];
        for (int i = 1; i < n;i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        while(q--)
        {
            ll x;
            cin >> x;
            if(x>pre[n-1]){
                cout << -1 << endl;
                continue;
            }
            int low=0,high=n-1;
            int indx=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(pre[mid]>=x){
                    indx=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            cout << indx + 1 << endl;
        }
        
    }
    return 0;
}