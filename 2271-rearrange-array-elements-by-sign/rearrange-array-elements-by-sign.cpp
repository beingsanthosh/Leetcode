class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a=0,b=1;
        int n=nums.size();
        vector<int>vet(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                vet[a]=nums[i];
                a+=2;
            }
            else
            {
                vet[b]=nums[i];
                b+=2;
            }
        }
        return vet;
    }
};