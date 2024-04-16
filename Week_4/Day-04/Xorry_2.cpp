#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int x;
        cin >> x;
        int i = 31;
        int on = 0;
        while(i>=0)
        {
            if((x &(1<<i)))
            {
                on++;
            }
            if(on==2)
            {
                break;
            }
            i--;
        }
        int cnt = 0;
        while(i>=0)
        {
            if((x&(1<<i))==0)
            {
                cnt++;
            }
            i--;
        }
        cout << (1<<cnt) << endl;
    }
    return 0;
}