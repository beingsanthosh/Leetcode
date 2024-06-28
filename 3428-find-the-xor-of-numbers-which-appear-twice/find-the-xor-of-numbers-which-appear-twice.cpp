class Solution {
public:
    int duplicateNumbersXOR(vector<int>& arr) {
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int x=0;
        for(auto i:mp)
        {
            if((i.second)>1)
            {
                x=x^(i.first);
            }
        }
        return x;

    }
};