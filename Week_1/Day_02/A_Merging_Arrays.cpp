#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    ll v1[a];
    ll v2[b];
    vector<ll> v3;
    for (int i = 0; i < a;i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < b;i++)
    {
        cin >> v2[i];
    }
    int i = 0, j = 0;
    while(i<a || j<b)
    {
        if(v1[i]>=v2[j])
        {
            v3.push_back(v2[j]);
            v3.push_back(v1[i]);
            i++;
            j++;
        }
        else
        {
            v3.push_back(v1[i]);
            v3.push_back(v2[j]);
            i++;
            j++;
        }
    }
    if(i!=a-1)
    {
        for (int k = i; k < a;k++)
            v3.push_back(v1[k]);
    }
    else if(j!=b-1)
    {
        for (int k = j; k < b;k++)
            v3.push_back(v2[k]);
    }
    int n = a+b;
    for (int k = 0; k < n;k++)
    {
        cout << v3[k] << " ";
    }
    return 0;
}