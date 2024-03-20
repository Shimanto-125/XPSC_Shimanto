#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        char c;
        cin >> n >> c;
        cin >> s;
        set<int> gsp;
        for (int i = 0;i < n;i++) 
        {
            if (s[i] == 'g') 
            {
                gsp.insert(i + 1);
            }
        }

        int sol = INT_MIN;
        for (int i = 0;i < n;i++) 
        {
            if (s[i] == c) 
            {
                auto up = gsp.lower_bound(i + 1);
                if (up != gsp.end()) 
                {
                    int d = (*up - (i + 1));
                    sol = max(sol, d);
                }
                else 
                {
                    int x = n - (i + 1), y = *gsp.begin();
                    sol = max(sol, x + y);
                }
            }
        }
        cout << sol << '\n';
    }
    return 0;
}