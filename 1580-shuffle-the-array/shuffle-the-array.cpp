class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>vet;
        for(int i=0;i<n;i++)
        {
            vet.push_back(nums[i]);
            vet.push_back(nums[i+n]);
        }
        return vet;
    }
};