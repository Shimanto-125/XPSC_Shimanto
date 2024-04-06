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
        int n,k;
        cin >> n;
        
        while(n!=0)
        {
            k = n - 1;
            n = n & (n-1);
            
        }
        cout << k << endl;
    }
    return 0;
}