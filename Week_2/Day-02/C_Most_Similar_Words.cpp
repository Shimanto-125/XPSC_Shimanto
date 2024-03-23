// https://codeforces.com/problemset/problem/1676/C
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> words[i];
        }
        int minDifference = INT_MAX; 
        for (int i = 0; i < n; i++) 
        {
            for (int j = i+1; j < n; j++) 
            {
                int diff = 0;
                for (int k = 0; k < m; k++) 
                {
                    diff += abs(words[i][k] - words[j][k]);
                }
                minDifference = min(minDifference, diff);
            }
        }
        cout << minDifference << endl;
    }
    return 0;
}

