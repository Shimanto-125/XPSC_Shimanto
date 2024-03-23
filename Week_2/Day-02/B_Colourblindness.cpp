#include<bits/stdc++.h>
using namespace std;

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
        char a[n], b[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        int k = 0;
        bool ans = false;
        while(k<n)
        {
            if(a[k]!=b[k]) 
            {
                if(a[k]=='B'  && b[k]=='G')
                {
                    b[k] = 'B';
                }
                else if(a[k]=='G' && b[k]=='B')
                {
                    b[k] = 'G';
                }
            }
            k++;
        }
        int i = 0;
        while(i<n)
        {
            if(a[i]!=b[i])
            {
                ans = true;
            }
            i++;
        }
        if(ans)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}