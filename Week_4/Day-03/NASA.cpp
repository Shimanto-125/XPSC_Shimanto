#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
const int mxN = (1 << 15);
vector<int> sob_palindrome;

void check_palindrome()
{
    for (int i = 0; i < mxN;i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool flag = true;
        for (int j = 0; j < (len / 2);j++)
        {
            if(s[j]!=s[len-j-1])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            sob_palindrome.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    check_palindrome();

    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector<int> cnt(mxN), a;
        for (int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }
        ll sum = n;
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < sob_palindrome.size();j++)
            {
                int notun = (a[i] ^ sob_palindrome[j]);
                sum += cnt[notun];
            }
        }
        cout << (sum / 2) << endl;
    }
    return 0;
}