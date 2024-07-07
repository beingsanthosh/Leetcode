class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size(),n=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int res=0;
        for(int i=0,j=0;(i<m) and (j<n);)
        {
            if(s[j]>=g[i])
            {
                i++;
                j++;
                res++;
            }
            else
            {
                j++;
            }
        }
        return res;
    }
};