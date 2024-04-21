#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> tc(q);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q;i++)
    {
        cin >> tc[i];
    }
    for (int i = 0; i < q;i++)
    {
        int l = 0, r = n - 1, mid;
        bool flag = false;
        while(l<=r)
        {
            mid = (l + r) / 2;
            if(tc[i]==a[mid])
            {
                flag = true;
                break;
            }
            else if(tc[i]>a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
        return 0;
}