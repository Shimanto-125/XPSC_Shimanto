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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        priority_queue<ll> pq;
        ll sum = 0;
        for (int i = 0; i < n;i++)
        {
            if(a[i]==0 && !pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}