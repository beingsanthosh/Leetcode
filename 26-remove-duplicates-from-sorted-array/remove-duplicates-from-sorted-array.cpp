class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int j=0;
        for(auto i:mp)
        {
            arr[j]=i.first;
            j++;
        }
        return mp.size();
        
    }
};