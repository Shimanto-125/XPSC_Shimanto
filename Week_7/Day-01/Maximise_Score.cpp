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
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        int opti_ans = INT_MAX;
        for (int i = 0; i < n;i++)
        {
            int mx = 0;
            if(i+1<n)
            {
                mx = max(mx, abs(a[i + 1] - a[i]));
            }
            if(i-1>=0)
            {
                mx = max(mx, abs(a[i - 1] - a[i]));
            }
            opti_ans = min(mx, opti_ans);
        }
        cout << opti_ans << endl;
    }
    return 0;
}