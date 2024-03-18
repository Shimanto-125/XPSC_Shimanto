// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int l=0,r=0,cnt=0;
	    int s=pat.size();
	    map<int,int>pt;
	    map<int,int>tx;
	    for(auto a:pat)
	    {
	        if(!pt.count(a))
	        {
	            pt.insert({a,1});
	        }
	        else
	        {
	            pt[a]++;
	        }
	    }
	    while(r<txt.size())
	    {
	        if(!tx.count(txt[r]))
	        {
	            tx.insert({txt[r],1});
	            
	        }
	        else
	        {
	            tx[txt[r]]++;
	        }
	        if((r-l+1)==s)
	        {
	            bool ans=false;
	            for(auto x:pt)
	            {
	                if(tx[x.first]!=x.second)
	                {
	                    ans=true;
	                    break;
	                }
	            }
	            if(!ans)
	            {
	                cnt++;
	            }
	            tx[txt[l]]--;
	            l++;
	            r++;
	        }
	        else
	        {
	            r++;
	        }
	    }
	    return cnt;
	}
};
