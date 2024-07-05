class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int maxx=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            maxx=max(s,maxx);
            if(s<0)
            {
                s=0;
            }
        }
        return maxx;
    }
};