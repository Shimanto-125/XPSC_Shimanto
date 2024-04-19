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
        string s;
        cin >> s;
        int n = s.size();
        bool flag = false;
        for (int i = 0; i < (n / 2) - 1;i++)
        {
            if(s[i]!=s[i+1])
            {
                flag = true;
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