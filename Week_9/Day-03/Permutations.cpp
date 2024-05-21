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
    if(n==2 || n==3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 2; i <= n;i+=2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n;i+=2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}