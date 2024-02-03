class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            int k=0;
            for(int j=0;j<arr[i].size();j++)
            {
                k+=arr[i][j];
            }
            ans=max(ans,k);
        }
        return ans;
        
    }
};