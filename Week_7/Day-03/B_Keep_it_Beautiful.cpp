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
        vector<int> a(n), v, ans;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        bool brk = false;
        for (int i = 0; i < n;i++)
        {
            if(v.empty())
            {
                ans.push_back(1);
                v.push_back(a[i]);
            }
            else
            {
                if(brk)
                {
                    if(a[i]<v.back())
                    {
                        ans.push_back(0);
                    }
                    else
                    {
                        if(a[i]<=v[0])
                        {
                            ans.push_back(1);
                            v.push_back(a[i]);
                        }
                        else
                        {
                            ans.push_back(0);
                        }
                    }
                    
                }
                else
                {
                    if(a[i]>=v.back())
                    {
                        ans.push_back(1);
                        v.push_back(a[i]);
                    }
                    else
                    {
                        if(a[i]<=v[0])
                        {
                            brk = true;
                            ans.push_back(1);
                            v.push_back(a[i]);
                        }
                        else
                        {
                            ans.push_back(0);
                        }
                    }
                }
            }
        }
        for(auto d:ans)
        {
            cout << d;
        }
        cout << endl;
    }
    return 0;
}