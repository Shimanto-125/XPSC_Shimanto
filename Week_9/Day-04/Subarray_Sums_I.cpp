#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    int i = 0, j = 0,cnt=0;
    while (i<n)
    {
        sum += a[i];
        while(sum>=x)
        {
            if(sum==x)
            {
                cnt++;
            }
            sum -= a[j];
            j++;
        }
        i++;
    }
    cout << cnt << endl;

    return 0;
}