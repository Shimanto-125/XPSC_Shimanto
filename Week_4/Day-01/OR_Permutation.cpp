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
        for (int i = n; i >= 1;i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}