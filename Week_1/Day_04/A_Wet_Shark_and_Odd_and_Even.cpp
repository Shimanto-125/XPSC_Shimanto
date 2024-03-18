// https://codeforces.com/problemset/problem/621/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if(sum%2==0)
    {
        cout << sum << endl;
        goto A;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n;i++)
    {
        sum -= v[i];
        if(sum%2==0)
        {
            cout << sum << "\n";
            goto A;
        }
        sum += v[i];
    }
    A:
        return 0;
}