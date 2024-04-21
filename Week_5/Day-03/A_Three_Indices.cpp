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
            cin >> a[i];
        int i = 0, j = 1, k = 2;
        bool flag = false;
        while(k<n)
        {
            if((a[i]<a[j]) && (a[j]>a[k]) && (a[i]<a[k]))
            {
                flag = true;
                cout << "YES" << endl;
                cout << i+1 << " " << j+1 << " " << k+1 << endl;
                break;
            }
            if(a[i]>a[j])
            {
                i++;
                j++;
                k++;
            }
            else if(a[i]<a[j] && (a[j]<a[k] || a[i]>a[k]))
            {
                k++;
            }
        }
        if(!flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}