// https://codeforces.com/problemset/problem/440/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n],k;
    int freq[n+1];
    for (int i = 1; i <= n;i++)
    {
        freq[i] = 0;
    }
    bool flag = false;
    for (int i = 0; i < n-1;i++)
    {
        cin >> a[i+1];
        freq[a[i+1]]++;
    }
    for (int i = 1; i <= n;i++)
    {
        if(freq[i]==0)
        {
            k = i;
        }
        
    }
    cout << k << "\n";
    return 0;
}