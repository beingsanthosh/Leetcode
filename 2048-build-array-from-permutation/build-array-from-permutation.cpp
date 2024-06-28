class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>vet(n,0);
        for(int i=0;i<n;i++)
        {
            vet[i]=nums[nums[i]];
        }
        return vet;
        
    }
};