class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,maxx=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
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
        maxx=max(maxx,c);
        return maxx;
    }
};