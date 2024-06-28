class Solution {
public:
    int count(int n,int k)
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
        if(c==k) return 1;
        return 0;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(count(i,k))
            {
                s+=nums[i];
            }
        }
        return s;
    }
};