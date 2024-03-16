//https://codeforces.com/contest/633/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i <= c;i+=a)
    {
        for (int j = 0; j <= c;j+=b)
        {
            if((i+j)==c)
            {
                cout << "Yes"<< "\n";
                return 0;
            }
        }
    }
    cout << "No"<< "\n";
    return 0;
}