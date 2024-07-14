class Solution {
public:
map<vector<int>,bool>mp;
void fun(vector<vector<int>>& ans,vector<int>&can,vector<int>& a,int i,int t,int res)
    {
        
        if(t==0)
        {
            sort(a.begin(),a.end());
            int sum=0;
            for(auto val:a)
            {
                sum+=val;
            }
            if(sum==res && mp[a]==false)
            {
                
                ans.push_back(a);
                mp[a]=true;
                return;
            }
            
        }
        if(i==can.size())
        {
            return;
        }
        if(t<0)
        {
            return;
        }
        
        a.push_back(can[i]);
        fun(ans,can,a,i+1,t-can[i],res);
        a.pop_back();
        fun(ans,can,a,i+1,t,res);
        // a.pop_back();
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>a;
        fun(ans,candidates,a,0,target,target);
        return ans;
    }
};