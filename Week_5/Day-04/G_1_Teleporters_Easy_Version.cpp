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
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            a[i] += (i + 1);
        }
        sort(a.begin(), a.end());
        int cnt = 0, sum = 0;
        for (int i = 0; i < n;i++)
        {
            if(sum+a[i]>c)break;
            sum += a[i];
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}