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
        int n,q;
        cin >> n >> q;
        vector<int> a(n), x;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q;i++)
        {
            int query;
            cin >> query;
            if(x.empty() || x.back()>query)
            {
                x.push_back(query);
            }
            
        }
        for (int i = 0; i < x.size();i++)
        {
            int y = 1 << x[i];
            for (int j = 0; j < n;j++)
            {
                if(a[j]%y==0)
                {
                    a[j] += (1<<(x[i]-1));
                }
            }
        }
        for(auto c:a)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}