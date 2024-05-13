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
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        map<int, int> cnt;
        for (int i = 0; i < n;i++)
        {
            for (int j = 2; j * j <= a[i];j++)
            {
                if(a[i]%j==0)
                {
                    while(a[i]%j==0)
                    {
                        cnt[j]++;
                        a[i] /= j;
                    }
                }
            }
            if(a[i]>1)
            {
                cnt[a[i]]++;
            }
        }
        bool ans = true;
        for(auto x : cnt)
        {
            if(x.second%n!=0)
            {
                ans = false;
                break;
            }
        }
        if(ans)
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

