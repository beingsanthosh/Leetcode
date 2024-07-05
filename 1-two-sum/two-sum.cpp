class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int r=t-arr[i];
            if(mp.find(r)!=mp.end())
            {
                return {i,mp[r]};
            }
            mp[arr[i]]=i;
        }
        return {};
    }
};