class Solution {
public:
    bool ok(int r,int c,int n)
    {
        if(r<0 || r>=n ||c<0 ||c>=n) return false;
        return true;
    }
    bool safe(int r,int c,int n,vector<string>& st)
    {
        for(int i=0;i<n;i++)
        {
            if(st[r][i]=='Q' || st[i][c]=='Q')
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(ok(r-i,c-i,n) && st[r-i][c-i]=='Q')return false;
            if(ok(r+i,c-i,n) && st[r+i][c-i]=='Q')return false;
            if(ok(r-i,c+i,n) && st[r-i][c+i]=='Q')return false;
            if(ok(r+i,c+i,n) && st[r+i][c+i]=='Q')return false;
        }
        return true;
    }
    void fun(vector<vector<string>>& ans,vector<string>& st,int n,int r)
    {
        if(r==n)
        {
            ans.push_back(st);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(safe(r,i,n,st))
            {
                st[r][i]='Q';
                fun(ans,st,n,r+1);
                st[r][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>st(n,"");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                st[i].push_back('.');
            }
        }
        fun(ans,st,n,0);
        return ans;
    }
};