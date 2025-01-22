class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto i:mp)
        {
            if(i.second==2)
            {
                ans=i.first;
            }
        }
        s=s-ans;
        int k=(n*(n+1)/2);
        int ans2=k-s;
        return {ans,ans2};
    }
};