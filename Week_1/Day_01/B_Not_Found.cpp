// //https://atcoder.jp/contests/abc071/tasks/abc071_b
//accepted
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int freq[27]={0};
    int mx = 0;
    for(auto c:s)
    {
        int x = c - 'a';
        mx = max(mx, x);
        freq[x]++;
    }
    bool nei = false;
    for (int i = 0; i < 26;i++)
    {
        if(freq[i]==0)
        {
            nei = true;
            char x = 'a' + i;
            cout << x << "\n";
            break;
        }
    }
    if(!nei)
    {
        cout << "None"<< "\n";
    }
        return 0;
}
