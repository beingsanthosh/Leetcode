class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(nums[m]==t)
            {
                return m;
            }
            else if(nums[m]>t)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return -1;
    }
};