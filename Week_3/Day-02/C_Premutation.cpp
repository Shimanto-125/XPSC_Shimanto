#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n][n-1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>arr[i][j];
            }
        }
        vector<int> v;
        int ele1=arr[0][0];
        int ele2;
        int count1=0;
        int count2=0;

        for(int i=1; i<n; i++)
        {
            if(arr[i][0]==ele1)
            {
                count1++;
            }
            else
            {
                ele2=arr[i][0];
                count2++;
            }
        }
        if(count1>=count2)
        {
            v.push_back(ele1);
            v.push_back(ele2);
        }
        else
        {
            v.push_back(ele2);
            v.push_back(ele1);
        }
        for(int i=1; i<n-1; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(v[i]!=arr[j][i])
                {
                    v.push_back(arr[j][i]);
                    j=n;
                }
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }      
        cout<<"\n";
    }
    return 0;
}

