#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<int>p;
        for(auto val:mp)
        {
            p.push(val.second);
        }
        while(p.size()>=2)
        {
            int tp1=p.top();
            p.pop();
            int tp2=p.top();
            p.pop();
            tp1--;
            tp2--;
            if(tp1) p.push(tp1);
            if(tp2) p.push(tp2);
        }
        int k=p.size();
        if(k==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<p.top()<<endl;
        }
    }
    return 0;
}