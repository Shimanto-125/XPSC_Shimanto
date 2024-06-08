#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int N = 5e5 +5;
int n,m;
ll a[N][2];
ll isStrong[N][2];
ll sum[N][2];
ll strongSum[N];

ll getSumStrong(int l, int r)
{
    if(l>r)
        return 0;
    return strongSum[r] - strongSum[l-1];
}
int binarySearch_n(int bad)
{
    int low = 0, high = n+m+1;
    int ans = n+m+1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        int koto = isStrong[mid][0];
        if(mid >= bad)
        {
            koto -= (a[bad][0] > a[bad][1]);
        }
        if(koto > n)
        {
            high = mid-1;
        }
        else if(koto==n)
        {
            high = mid-1;
            ans = mid;
        }
        else
        {
            
            low = mid+1;
        }
    }
    return ans;
}

int binarySearch_m(int bad)
{
    int low = 0, high = n+m+1;
    int ans = n+m+1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        int koto = isStrong[mid][1];
        if(mid >= bad)
        {
            koto -= (a[bad][1] > a[bad][0]);
        }
        if(koto > m)
        {
            high = mid-1;
        }
        else if(koto==m)
        {
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        int size=n+m+1;
        for(int i=1;i<=size;i++)
        {
            cin>>a[i][0];
        }
        for(int i=1;i<=size;i++)
        {
            cin>>a[i][1];
        }
        for(int i=1;i<=size;i++)
        {
            strongSum[i]= strongSum[i-1] + max(a[i][0], a[i][1]);
            sum[i][0] = sum[i-1][0] + a[i][0];
            sum[i][1] = sum[i-1][1] + a[i][1];
            isStrong[i][0] = isStrong[i-1][0] + (a[i][0] > a[i][1] ? 1: 0);
            isStrong[i][1] = isStrong[i-1][1] + (a[i][1] > a[i][0] ? 1: 0);
        }
        for(int i=1;i<=size;i++)
        {
            int indx_n=binarySearch_n(i);
            int indx_m=binarySearch_m(i);
            ll ans=0;
            if(indx_n<=indx_m)
            {
                ans += getSumStrong(1, indx_n);
                ans += sum[n+m+1][1] - sum[indx_n][1];
                if(i <= indx_n)
                {
                    ans -= max(a[i][0], a[i][1]);
                }
                else{
                    ans -= a[i][1];
                }
            }
            else
            {
                ans += getSumStrong(1, indx_m);
                ans += sum[n+m+1][0] - sum[indx_m][0];
                if(i <= indx_m)
                {
                    ans -= max(a[i][0], a[i][1]);
                }
                else
                {
                    ans -= a[i][0];
                }
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}