#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int a[200001],b[200001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    for(int i=1;i<=n;i++)
    {
        int l,r;
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    for(int i=1;i<=200001;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    for(int i=1;i<=200001;i++)
    {
        if(a[i]>=k)
        {
            b[i]=1;
        }
        else
        {
            b[i]=0;
        }
    }
    for(int i=1;i<=200001;i++)
    {
        b[i]=b[i]+b[i-1];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<(b[r]-b[l-1])<<endl;
    }
    return 0;
}
// printf("%d\n",bb[b]-bb[aa-1])