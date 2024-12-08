class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int ans=-1,maxx=-1;
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>maxx)
            {
                maxx=mp[arr[i]];
                ans=arr[i];
            }
        }
        return ans;
    }
};