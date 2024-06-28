class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int maxx=0,n=acc.size();
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<acc[i].size();j++)
            {
                s+=acc[i][j];
            }
            maxx=max(s,maxx);
        }
        return maxx;
    }
};