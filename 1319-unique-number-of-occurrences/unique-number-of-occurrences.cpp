class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        vector<int>vet;
        set<int>st;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            vet.push_back(i.second);
            st.insert(i.second);
        }
        if(vet.size()==st.size())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};