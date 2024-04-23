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
        int m = (n * n - n) / 2, b[m], a[n];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(b, b + m);
        int x = 1, indx = 0;
        int new_arr = n - x;
        while(n - x > 0)
        {
            a[indx++] = b[new_arr - 1];
            x++;
            new_arr += n - x;
        }
        a[n - 1] = 1000000000;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}