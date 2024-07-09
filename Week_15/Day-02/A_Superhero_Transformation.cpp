// #include <iostream>
// #include <string>

// using namespace std;

// bool isVowel(char ch) {
//     return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
// }

// int main() {
//     string s, t;
//     cin >> s >> t;

//     if (s.length() != t.length()) {
//         cout << "No" << endl;
//         return 0;
//     }

//     for (size_t i = 0; i < s.length(); ++i) {
//         if ((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i]))) {
//             cout << "No" << endl;
//             return 0;
//         }
//     }

//     cout << "Yes" << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
bool isVowel(char ch) 
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length()) 
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++) 
    {
        if ((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i]))) 
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}