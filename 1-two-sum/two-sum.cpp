class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int k=t-arr[i];
            if(mp.find(k)!=mp.end())
            {
                return {i,mp[k]};
            }
            else
            {
                mp[arr[i]]=i;
            }
        }
        return {};
        
    }
};