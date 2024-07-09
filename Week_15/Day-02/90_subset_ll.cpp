class Solution {
public:
    void fun(int idx,vector<vector<int>>& ans,vector<int>& a,vector<int>& nums)
    {
        ans.push_back(a);
        if(idx==nums.size())
        {       
            return;
        }
        
            for(int i=idx;i<nums.size();i++)
            {
                if(i>idx && nums[i]==nums[i-1])
                {
                    continue;
                }
                a.push_back(nums[i]);
                fun(i+1,ans,a,nums);
                a.pop_back();
            }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>a;
        sort(nums.begin(),nums.end());
        fun(0,ans,a,nums);
        return ans;
    }
};