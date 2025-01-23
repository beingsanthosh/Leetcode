class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n=mat.size();
        int mm=mat[0].size();
        for(int i=0;i<n;i++)
        {
            int l=0,r=mm-1;
            while(l<=r)
            {
                int m=(l+r)/2;
                if(mat[i][m]==t)
                {
                    return true;
                }
                else if(mat[i][m]>t)
                {
                    r=m-1;
                }
                else
                {
                    l=m+1;
                }
            }
        }
        return false;
        
    }
};