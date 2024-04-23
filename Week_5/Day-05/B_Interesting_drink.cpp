#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        auto it = upper_bound(a.begin(), a.end(), x);
        cout << it - a.begin() << endl;
    }
    return 0;
}