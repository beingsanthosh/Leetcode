class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>vet;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            vet.push_back(nums[i]*nums[i]);
        }
        sort(vet.begin(),vet.end());
        return vet;
    }
};