class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>vet;
        vector<int>ali;
        vector<int>bob;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2)
        {
            ali.push_back(nums[i]);
            bob.push_back(nums[i+1]);
        }
        for(int i=0;i<ali.size();i++)
        {
            vet.push_back(bob[i]);
            vet.push_back(ali[i]);
        }
        return vet;
    }
};