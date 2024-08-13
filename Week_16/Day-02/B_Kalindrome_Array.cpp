#include<bits/stdc++.h>
using namespace std;
int palndrom(vector<int>&v3)
{
    int k = 0, l = v3.size() - 1;
    int ans = 1;
    while(k<l)
    {
        if(v3[k]!=v3[l])
        {
            ans = 0;
            break;
        }
        k++;
        l--;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        int i = 0, j = n - 1, ans = -1;
        int x, y;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                ans = 1;
                x = a[i];
                y = a[j];
                break;
            }
            i++;
            j--;
        }
        
        if(ans==-1)
            {
                cout << "YES" << endl;
            }
        else
        {
            vector<int> v1, v2;
            for (int k = 0; k < n;k++)
            {
                if(a[k]!=x)
                {
                    v1.push_back(a[k]);
                }
            }
            for (int k = 0; k < n; k++)
            {
                if (a[k] != y)
                {
                    v2.push_back(a[k]);
                }
            }
            int f1 = palndrom(v1);
            int f2 = palndrom(v2);
            if((f1==1) || (f2==1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}