// https://codeforces.com/contest/1722/problem/A
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
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
        string s;  
        cin >> s;
        bool ob1 = false, ob2 = false,ob3=false,ob4=false,ob5=false;
        for(auto c:s)
        {
            if(c=='T')
            {
                ob1 = true;
            }
            else if(c=='i')
            {
                ob2 = true;
            }
            else if(c=='m')
            {
                ob3 = true;
            }
            else if(c=='u')
            {
                ob4 = true;
            }
            else if(c=='r')
            {
                ob5 = true;
            }
        }
        if(s.size()==5 && ob1 && ob2 && ob3 && ob4 && ob5 )
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