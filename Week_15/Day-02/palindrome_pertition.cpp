class Solution {
public:
bool ispalindrom(string& s,int p,int q)
{
    while(p<=q)
    {
        if(s[p]!=s[q])
        {
            return false;
        }
        p++;
        q--;
    }
    return true;
}
void fun(int indx,vector<vector<string>>&ans,vector<string>&st,string& s,int n)
{
    if(indx==n)
    {
        ans.push_back(st);
        return;
    }
    for(int i=indx;i<n;i++)
    {
        if(ispalindrom(s,indx,i))
        {
            st.push_back(s.substr(indx,i-indx+1));
            fun(i+1,ans,st,s,n);
            st.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>st;
        int n=s.size();
        fun(0,ans,st,s,n);
        return ans;
    }
};