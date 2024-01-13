class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        int c=0;
        for(auto i:mp)
        {
            if((i.second)>0) c+=(i.second);
        }
        return c;
    }
};