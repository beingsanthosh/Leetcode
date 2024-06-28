class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>vet;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            vet.push_back(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            vet.push_back(nums[i]);
        }
        return vet;
    }
};