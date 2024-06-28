class Solution {
public:
    int numJewelsInStones(string j, string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int ss=0;
        for(auto i:j)
        {
            if(mp.find(i)!=mp.end())
            {
                ss+=mp[i];
            }
        }
        return ss;

    }
};