class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>vet(2*n,0);
        for(int i=0;i<n;i++)
        {
            vet[i]=nums[i];
            vet[i+n]=nums[i];
        }
        return vet;
    }
};