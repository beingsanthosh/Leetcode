class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>vet;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i]*nums[i];
            vet.push_back(a);
        }
        sort(vet.begin(),vet.end());
        return vet;
        
    }
};