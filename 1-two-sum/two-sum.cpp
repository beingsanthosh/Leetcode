class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int>vet;
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(t-nums[i])!=mp.end())
            {
                vet.push_back(mp[t-nums[i]]);
                vet.push_back(i);
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return vet;
    }
};