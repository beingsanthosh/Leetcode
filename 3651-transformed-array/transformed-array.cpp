class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>vet(n);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                vet[i]=nums[(i+nums[i])%n];
            }
            else if(nums[i]<0)
            {
                int j=i;
            int t=abs(nums[i]);
                while(t--)
                {
                    j=(j<=0) ?n-1 :j-1;
                }
                vet[i]=nums[j];
            }
            else
            {
                vet[i]=nums[i];
            }
        }
        return vet;

    }
};