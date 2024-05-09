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
        int zero = 0, one = 0;
        for (int i = 0; i < s.size();i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        for (int i = 0; i < s.size();i++)
        {
            if(s[i]=='1')
            {
                if(zero>0)
                {
                    zero--;
                }
                else break;
            }
            else
            {
                if(one>0)
                {
                    one--;
                }
                else break;
            }
        }
        cout << zero + one << endl;
    }
    return 0;
}