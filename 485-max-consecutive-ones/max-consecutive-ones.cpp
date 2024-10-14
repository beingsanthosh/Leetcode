class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                maxx=max(maxx,c);
                c=0;
            }
            else
            {
                c++;
            }
        }
        maxx=max(c,maxx);
        return maxx;
    }
};