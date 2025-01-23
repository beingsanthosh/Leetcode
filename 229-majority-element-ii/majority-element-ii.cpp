class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto i:mp)
        {
            if(i.second>(n/3))
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};