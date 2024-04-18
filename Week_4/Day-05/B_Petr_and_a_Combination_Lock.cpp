#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        bool flag = 0;
        int m = (1<<n);
        for(int i=0;i<m;i++)
        {
            int sum = 0;
            for(int j = 0;j<n;j++)
            {
                if(i &(1<<j))sum+=a[j];
                else sum-=a[j];
            }
            if(sum%360==0){
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}