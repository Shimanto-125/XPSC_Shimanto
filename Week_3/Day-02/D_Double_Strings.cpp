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
        int n;
        cin >> n;
        string a[n];
        int ans[n];
        set<string> s;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            ans[i] = 0;
        }
        for (int i = 0; i < n;i++)
        {
            for (int j = 1; j < a[i].size();j++)
            {
                string ss1 = "", ss2 = "";
                for (int k = 0; k < j;k++)
                {
                    ss1 += a[i][k];
                }
                for (int k = j; k < a[i].size();k++)
                {
                    ss2 += a[i][k];
                }
                if(s.find(ss1)!=s.end() && s.find(ss2)!=s.end())
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n;i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}