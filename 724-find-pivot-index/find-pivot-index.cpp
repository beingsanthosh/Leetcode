class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            s-=nums[i];
            if(k==s)
            {
                return i;
            }
            k+=nums[i];
        }
        return -1;
    }
};