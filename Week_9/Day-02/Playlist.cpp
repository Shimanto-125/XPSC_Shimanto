
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> songs(n);
    for(int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    map<int, int> last_occurrence;
    int start = 0, max_length = 0;

    for(int end = 0; end < n; end++) {
        if(last_occurrence.count(songs[end])) {
            start = max(start, last_occurrence[songs[end]] + 1);
        }
        last_occurrence[songs[end]] = end;
        max_length = max(max_length, end - start + 1);
    }

    cout << max_length << "\n";

    return 0;
}
