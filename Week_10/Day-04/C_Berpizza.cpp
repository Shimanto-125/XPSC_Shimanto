#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    queue<int>mono;
    priority_queue<pair<int,int>>poly;
    unordered_map<int,bool>serve;
    int custom_id=1;
    while(T--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int m;
            cin>>m;
            mono.push(custom_id);
            poly.push({m,-custom_id});
            serve[custom_id]=false;
            custom_id++;
        }
        else if(type==2)
        {
            while(serve[mono.front()])
            {
                mono.pop();
            }
            int ans=mono.front();
            mono.pop();
            serve[ans]=true;
            cout<<ans<<" ";
        }
        else if(type==3)
        {
            while(serve[-poly.top().second])
            {
                poly.pop();
            }
            int ans=-poly.top().second;
            poly.pop();
            serve[ans]=true;
            cout<<ans<<" ";
        }
    }
    cout<<endl;
    return 0;
}