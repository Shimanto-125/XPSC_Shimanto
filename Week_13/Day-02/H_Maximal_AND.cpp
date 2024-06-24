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
        int n,k;
        cin>>n>>k;
        int a;
        map<int,int>m;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(i==1)
            {
                a=x;
            }
            else
            {
                a&=x;
            }
            for(int j=0; j<31; j++)
            {
                if((x&(1<<j))==0)
                    m[j]++;
            }
        }
        for(int i=30; i>=0; i--)
        {
            if(m[i]&&m[i]<=k)
            {
                k-=m[i];
                a |=1<<i;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}

// /*starting with the name of almighty ALLAH*/
// /*solved by RAKIB JOY*/
// // Practice is the only shortcut to improve
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;
//         int an;
//         map<int,int>m;
//         for(int i=1; i<=a; i++)
//         {
//             int x;
//             cin>>x;
//             if(i==1)
//             {
//                 an=x;
//             }
//             else
//                 an&=x;
//             for(int j=0; j<31; j++)
//             {
//                 if((x&(1<<j))==0)
//                     m[j]++;
//             }
//         }
//         for(int i=30; i>=0; i--)
//         {
//             if(m[i]&&m[i]<=b)
//             {
//                 b-=m[i];
//                 an|=1<<i;
//             }
//         }
//         cout<<an<<endl;
//     }
//     return 0;
// }