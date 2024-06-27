#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string sol="";
    multiset<char>ms,res;
    for(auto ch:s)
    {
        ms.insert(ch);
    }
    for(auto ch:ms)
    {
        if(k)
        {
            res.insert(ch);
            k--;
        }
    }
    for(auto ch:s)
    {
        auto it=res.find(ch);
        if(it!=res.end())
        {
            res.erase(it);
        }
        else
        {
            sol+=ch;
        }
    }
    cout<<sol<<endl;

    return 0;
}