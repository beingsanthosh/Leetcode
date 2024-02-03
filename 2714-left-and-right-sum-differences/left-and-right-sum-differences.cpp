class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>vet;
        int s=accumulate(nums.begin(),nums.end(),0);
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
            l+=nums[i];
            r=s-l+nums[i];
            vet.push_back(abs(l-r));
        }
        return vet;
    }
};