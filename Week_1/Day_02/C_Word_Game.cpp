#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        map<string, int> wordCount;
        vector<string> words[3];
        for (int i = 0; i < 3; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                string word;
                cin >> word;
                words[i].push_back(word);
                wordCount[word]++;
            }
        }
        int points[3] = {0};
        for (int i = 0; i < 3; ++i) 
        {
            for (auto word : words[i]) 
            {
                if (wordCount[word] == 1) 
                {
                    points[i] += 3;
                } else if (wordCount[word] == 2) 
                {
                    points[i] += 1;
                }
            }
        }
        for (int i = 0; i < 3; ++i) 
        {
            cout << points[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
