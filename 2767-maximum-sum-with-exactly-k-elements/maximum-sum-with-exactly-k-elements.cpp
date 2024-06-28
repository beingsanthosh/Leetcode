class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        int maxx=0;
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,nums[i]);
        }
        int t=0;
        for(int i=0;i<k;i++)
        {
            t+=maxx+i;
        }
        return t;
    }
};