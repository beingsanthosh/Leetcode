class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=-1;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                maxx=max(maxx,c);
                c=0;
            }
        }
        return max(maxx,c);
    }
};