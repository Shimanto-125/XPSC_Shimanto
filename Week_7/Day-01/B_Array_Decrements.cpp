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
        vector<int> a(n), b(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n;i++)
        {
            cin >>b[i];
        }
        int dif = -1, diffr = -1;
        bool ans = false;
        for (int i = 0; i < n;i++)
        {
            if(a[i]<b[i])
            {
                ans = true;
                break;
            }
            if(b[i]!=0)
            {
                if(dif==-1)
                {
                    dif = a[i] - b[i];
                }
                else
                {
                    if(a[i]-b[i]!=dif)
                    {
                        ans = true;
                        break;
                    }
                }
            }
            else
            {
                diffr = max(diffr, a[i] - b[i]);
            }
        }
        if(!ans && (dif==-1 || diffr<=dif))
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