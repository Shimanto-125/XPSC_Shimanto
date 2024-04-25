#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, pairs=0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m;i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            if(abs(a[i]-b[j])<2)
            {
                b[j] = 1000;
                pairs++;
                break;
            }
        }
    }
    cout << pairs << endl;
    return 0;
}