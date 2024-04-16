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
        int n, b;
        cin >> n >> b;
        vector<int> ar(n);
        map<int, int> mp;
        for (int i = 0; i < n;i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        bool ans = false;
        int x=- 1;
        for (int i = 0; i < n;i++)
        {
            int a = ar[i] & b;
            if(a==b)
            {
                x &= ar[i];
            }
        }
        if(x==b)
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