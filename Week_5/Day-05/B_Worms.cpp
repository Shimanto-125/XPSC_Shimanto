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
    cin>>n;
    int index=1;
    int worms;
    vector<int>arr(1000006);
    
    for(int i=1;i<=n;i++){
        cin>>worms;
        while(worms--)
        {
            arr[index]=i;
            index++;
        }
    }
    
    int juicy_worm;
    cin>>juicy_worm;
    while(juicy_worm--)
    {
        cin>>worms;
        cout<<arr[worms]<<endl;
    }
    return 0;
}