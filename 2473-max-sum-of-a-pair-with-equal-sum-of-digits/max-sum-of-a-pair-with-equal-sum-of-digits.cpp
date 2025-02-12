class Solution {
    int add(int n){
        int s=0;
        while(n)
        {
            int r=n%10;
            s+=r;
            n=n/10;
        }
        return s;
    }
    public:
    int maximumSum(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        int maxx=-1;
        for(int i=0;i<n;i++)
        {
            int k=add(nums[i]);
            if(mp.find(k)!=mp.end())
            {
                maxx=max(maxx,nums[i]+mp[k]);
                if(mp[k]<nums[i])
                {
                    mp[k]=nums[i];
                }
            }
            else
            {
                mp[k]=nums[i];
            }
        }
        return maxx;
        
    }
};