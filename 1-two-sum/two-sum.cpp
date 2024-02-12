class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(t-arr[i])!=mp.end())
            {
                return {mp[t-arr[i]],i};
            }
            else
            {
                mp[arr[i]]=i;
            }
        }
        return {-1,-1};
    }
};