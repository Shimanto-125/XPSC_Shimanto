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
        vector<int> v(n);
        set<int> s;
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        int i = n-1;
        while(i>=0)
        {
            s.insert(v[i]);
            cnt++;
            if(cnt>s.size())
            {
                break;
            }
            i--;
        }
        cout << (n-s.size()) << endl;
    }
    return 0;
}