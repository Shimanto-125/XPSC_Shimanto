// https://codeforces.com/problemset/problem/1374/C
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
        char ch[n];
        for (int i = 0; i < n;i++)
        {
            cin >> ch[i];
        }
        stack<char> stk1, stk2;
        for (int i = 0; i < n ;i++)
        {
            if(ch[i]==')' && stk2.empty())
            {
                stk1.push(ch[i]);
            }
            else if(ch[i]=='(')
            {
                stk2.push(ch[i]);
            }
            else
            {
                stk2.pop();
            }
        }
        cout << stk1.size() << endl;
    }
        return 0;
}