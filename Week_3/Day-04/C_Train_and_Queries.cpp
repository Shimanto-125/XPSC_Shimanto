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
        int n,q;
        cin >> n >> q;
        vector<int> a(n);
        map<int, vector<int>> maping;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            maping[a[i]].push_back(i);
        }
        
        while(q--)
        {
            int s, p;
            cin >> s >> p;
            if(!maping[s].empty() && !maping[p].empty() && maping[s].front()<maping[p].back())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}