class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int c=mp.begin()->second;
        for(auto i:mp)
        {
           if((i.second)!=c)
           {
            return false;
           }
        }
        return true;
    }
};