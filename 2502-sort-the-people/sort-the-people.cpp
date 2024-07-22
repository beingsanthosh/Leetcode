class Solution {
public:
    vector<string> sortPeople(vector<string>& arr1, vector<int>& arr2) {
        map<int,string>mp;
        int n=arr2.size();
        for(int i=0;i<n;i++)
        {
            mp[arr2[i]]=arr1[i];
        }
        vector<string> ans;

        auto it = mp.end();
        it--;

        while(it != mp.begin()){

            ans.push_back(it->second);
            it--;
            
        }

        ans.push_back(it->second);

        return ans;
    }
};