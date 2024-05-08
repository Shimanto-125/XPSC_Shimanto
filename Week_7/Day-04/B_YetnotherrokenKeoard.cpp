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
        
        string s;
        cin >> s;
        n = s.size();
        vector<int> vc, vs;
        vector<bool> flag(n + 2, true);
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='b')
            {
                if(!vs.empty())
                {
                    flag[vs.back()] = false;
                    vs.pop_back();
                }
                flag[i] = false;
            }
            else if(s[i]=='B')
            {
                if(!vc.empty())
                {
                    flag[vc.back()] = false;
                    vc.pop_back();
                }
                flag[i] = false;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                vs.push_back(i);
            }
            else
            {
                vc.push_back(i);
            }
        }
        for (int i = 0; i < n;i++)
        {
            if(flag[i])
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}