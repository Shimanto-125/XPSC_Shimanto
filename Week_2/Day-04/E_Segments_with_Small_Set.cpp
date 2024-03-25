#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i]; 
    }
    long long ans = 0; 
    map<int, int> freq; 
    int uniqueCount = 0;
    int l = 0, r = 0;
    while(r<n) 
    {
        if (freq[arr[r]] == 0) 
        {
            uniqueCount++;
        }
        freq[arr[r]]++;
        while (uniqueCount > k)
        {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0) 
            {
                uniqueCount--;
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << endl; 
    return 0;
}