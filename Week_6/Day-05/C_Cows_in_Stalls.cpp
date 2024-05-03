#include<bits/stdc++.h>
using namespace std;

// bool check(int mid, vector<int> &stalls, int cows) {
//     int count = 1;
//     int last_position = stalls[0];
//     for(int i = 1; i < stalls.size(); i++) {
//         if(stalls[i] - last_position >= mid) {
//             last_position = stalls[i];
//             count++;
//         }
//         if(count == cows) {
//             return true;
//         }
//     }
//     return false;
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> stalls(n);
    for(int i = 0; i < n; i++) {
        cin >> stalls[i];
    }
    sort(stalls.begin(), stalls.end());
    auto check = [&](int mid) -> bool
    {
        int cnt = 1;
        int pos = stalls[0];
        for (int i = 1; i < stalls.size();i++)
        {
            if(stalls[i]-pos>=mid)
            {
                pos = stalls[i];
                cnt++;
            }
            if(cnt==k)
            {
                return true;
            }
        }
        return false;
    };
    int low = 0, high = 1e9;
    while(high > 1+low) 
    {
        int mid = (low + high) / 2;
        if(check(mid)) {
            low = mid;
        } else {
            high = mid;
        }
    }
    cout << low << "\n";

    return 0;
}
