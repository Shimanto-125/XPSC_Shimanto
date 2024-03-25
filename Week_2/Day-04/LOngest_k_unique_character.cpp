// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int l=0,r=0,mx=INT_MIN;
        int n=s.size();
        map<char,int>freq;
        int cnt=0;
        while(r<n)
        {
            if(freq[s[r]]==0)
            {
                cnt++;
            }
            freq[s[r]]++;
            while(cnt>k)
            {
                freq[s[l]]--;
                if(freq[s[l]]==0)
                {
                    cnt--;
                }
                l++;
            }
            if(cnt==k)
            {
                mx=max(mx,(r-l+1));
            }
            
            r++;
        }
        if(mx==INT_MIN)
        {
            return -1;
        }
        return mx;
    }
};



