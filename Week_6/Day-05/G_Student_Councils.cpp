#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k, n;
    cin >> k >> n;
    priority_queue<ll> pq;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }
    int councils = 0;
    while(pq.size() >= k) {
        vector<ll> temp;
        for(int i = 0; i < k; i++) {
            temp.push_back(pq.top() - 1);
            pq.pop();
        }
        for(int i = 0; i < k; i++) {
            if(temp[i] > 0) {
                pq.push(temp[i]);
            }
        }
        councils++;
    }
    cout << councils << endl;
    return 0;
}

