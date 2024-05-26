// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define endl "\n"

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     string s;
//     cin >> s;
//     string ans;
//     ans = s;
//     ll n = s.size();
//     reverse(s.begin(), s.end());
//     if(s==ans)
//     {
//         cout << 0 << endl;
//     }
//     else
//     {
//         cout << 3 << endl;
//         cout << "R " << n - 1 << endl;
//         cout << "L " << n << endl;
//         cout << "L " << 2 << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

        string s,s1;
        cin>>s;
        ll len= s.length();
        s1=s;
        reverse(s1.begin(),s1.end());
        if(s==s1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<3<<endl;
            cout<<"R "<<len-1<<endl;
            cout<<"L "<<len<<endl;
            cout<<"L "<<2<<endl;
        }


}