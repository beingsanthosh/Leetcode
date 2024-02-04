class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s=0;
        int s1=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            while(nums[i]!=0)
            {
                s1+=(nums[i]%10);
                nums[i]/=10;
            }
    
        }
        return abs(s-s1);

        
    }
};