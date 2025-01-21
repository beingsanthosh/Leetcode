class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int s=0;
        vector<int>vet;
        for(int i=0;i<n;i++)
        {
            int k=i+1;
            if(mp.find(k)==mp.end())
            {
                vet.push_back(i+1);
            }
        }
        return vet;
        
    }
};