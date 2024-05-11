// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define endl "\n"
// bool Tprime(ll n)
// {
//     if(n<2)
//         return false;
//     for (ll i = 2; i * i <= n;i++)
//     {
//         if(n%i==0)
//             return false;
//     }
//     return true;
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n;i++)
//     {
//         ll x;
//         cin >> x;
//         ll root = sqrt(x);
//         if(root*root==x && Tprime(root))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//         return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        ll x;
        cin >> x;
        vector<ll> a;
        for (ll i = 1; i * i <= x;i++)
        {
            if(x%i==0)
            {   a.push_back(i);
                if((x/i)!=i)
                {
                    a.push_back(x / i);
                }
            }
        }
        // sort(a.begin(), a.end());
        // for(auto val:a)
        // {
        //     cout << val << " ";
        // }
        if(a.size()==3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
        return 0;
}