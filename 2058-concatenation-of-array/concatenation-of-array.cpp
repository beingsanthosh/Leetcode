class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>vet(n*2,0);
        for(int i=0;i<n;i++)
        {
            vet[i]=nums[i];
            vet[i+n]=nums[i];
        }
        return vet;
    }
};