class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        int n=nums.size();
        vector<int>vet;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<p)
            {
                vet.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==p)
            {
                vet.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>p)
            {
                vet.push_back(nums[i]);
            }
        }
        return vet;
    }
};