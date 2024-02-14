class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0 ;
        int e = nums.size()-1;
        if(e == 0) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[e] > nums[e-1]) return e;
        int ans = -1;
        int mid = s + (e - s)/2;
        while(e >= s)
        {
            if(nums[mid] >= nums[mid+1])
            {
                e = mid - 1;
                ans = mid;
            }
            if(nums[mid] < nums[mid+1])
            {
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};