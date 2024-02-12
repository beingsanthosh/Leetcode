class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=INT_MIN;
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            maxx=max(maxx,s);
            if(s<0)
            {
                s=0;
            }
        }
        return maxx;
    }
};