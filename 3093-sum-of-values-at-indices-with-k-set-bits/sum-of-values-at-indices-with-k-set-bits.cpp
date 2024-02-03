class Solution {
public:
    int bits(int n)
    {
        int c=0;
        while(n)
        {
            if(n&1)
            {
                c++;
            }
            n=n>>1;
        }
        return c;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int a=bits(i);
            if(a==k)
            {
                s+=nums[i];
            }
        }
        return s;
    }
};