#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        if(i % 4 == 0 || i % 4 == 1) {
            cout << 'a';
        } else {
            cout << 'b';
        }
    }
    return 0;
}
