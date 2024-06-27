class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]=i;
        }
        for(int i=0;i<t.size();i++)
        {
            mp2[t[i]]=i;
        }
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            k+=abs(mp1[s[i]]-mp2[s[i]]);
        }
        return k;
    }
};