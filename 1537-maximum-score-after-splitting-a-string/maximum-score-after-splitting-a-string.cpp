class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int maxx=INT_MIN;
        int l=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0')
            {
                l++;
            }
            int r=0;
            for(int j=i+1;j<n;j++)
            {
                if(s[j]=='1')
                {
                    r++;
                }
            }
            maxx=max(l+r,maxx);
        }
        return maxx;

        
    }
};