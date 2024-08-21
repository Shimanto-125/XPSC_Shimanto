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
        string st,a,b;
        cin>>st;
        a+=st[0];
        bool flag=false;
        for(int i=1;i<st.size();i++)
        {
            if(st[i]!='0' || flag)
            {
                b+=st[i];
                flag=true;
            }
            else
            {
                a+=st[i];
            }
        }
        if(b.size()==0)b+='0';
        int p=stoi(a);
        int q=stoi(b);
        if(q>p && p!=0 && q!=0)
        {
            cout<<p<<" "<<q<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}