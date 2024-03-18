// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) 
{
    vector<long long >v;
    queue<long long>q;
    int r=0,l=0;
    while(r<N)
    {
        if(A[r]<0)
        {
            q.push(A[r]);
        }
        if((r-l+1)==K)
        {
            if(!q.empty())
            {
                v.push_back(q.front());
            }
            else
            {
                v.push_back(0);
            }
            if(A[l]==q.front())
            {
                q.pop();
            }
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    return v;
}