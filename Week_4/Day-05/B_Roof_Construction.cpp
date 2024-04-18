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
        int k = 0;
        while((1<<(k+1))<=(n-1))
        {
            k++;
        }
        for (ll i = ((1 << k)-1); i >= 0;i--)
        {
            cout << i << " ";
        }
        for (ll i = (1 << k); i < n;i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}