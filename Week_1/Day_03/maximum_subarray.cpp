class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int l=0,r=0;
        long long ans=0,sum=0;
        while(r<N)
        {
            sum+=Arr[r];
            if((r-l+1)==K)
            {
                ans=max(ans,sum);
                sum-=Arr[l];
                r++;
                l++;
            }
            else
            {
                r++;
            }
        }
        return ans;
        
    }
};