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
        string s;
        cin >> s;
        stack<char> st;
        int i = 1;
        int x = 0;
        bool flag = false;
        st.push(s[0]);
        while(i<n)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()!=s[i])
                {
                    st.pop();
                    x++;
                }
                else
                {
                    st.push(s[i]);
                }
            } 
            i++;
        }
        if(x%2==0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
    return 0;
}