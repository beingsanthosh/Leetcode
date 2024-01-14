class Solution {
public:
    bool closeStrings(string s1, string s2) {
        if(s1.size()!=s2.size())
        {
            return false;
        }
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto i:s1)
        {
            mp1[i]++;
        }
        for(auto i:s2)
        {
            mp2[i]++;
        }
        vector<int>v1;
        vector<int>v2;
        for(auto i:mp1) 
        { 
            v1.push_back(i.second);
            v2.push_back(mp2[i.first]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return (v1==v2) ? true : false;

    }
};