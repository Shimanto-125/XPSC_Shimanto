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
        vector<string> s(n);
        vector<string> ::iterator it;
        for (int i = 0; i < n;i++)
        {
            cin >> s[i];
        }
        vector<int> v;
        // for (int i = 0; i < n;i++)
        // {
        //     for (int j = 0; j < n;j++)
        //     {
        //         it = find(s.begin(), s.end(), (s[i] - s[j]));
        //     }
        // }
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n;j++)
            {
                for (int k = 0; k < n;k++)
                {
                    if(s[i]==s[j]+s[k])
                    {
                        v.push_back(i);
                    }
                }
            }
        }
        string ss = "";
        int i = 0;
        int j = 0;
        while(i<n)
        {
            if(i==v[j])
            {
                ss.push_back('1');
                j++;
            }
            else
            {
                ss.push_back('0');
            }
            i++;
        }
        cout << ss << endl;
    }
    return 0;
}


