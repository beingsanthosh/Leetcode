class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>vet;
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        while(i<n)
        {
            vet.push_back(nums[i+1]);
            vet.push_back(nums[i]);
            i+=2;
        }
        return vet;
    }
};