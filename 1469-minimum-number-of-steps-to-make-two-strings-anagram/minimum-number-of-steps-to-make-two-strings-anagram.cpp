class Solution {
public:
    int minSteps(string s, string t) {
        int a1[26]={};
        int a2[26]={};
        for(auto i:s)
        {
            a1[i-'a']++;
        }
        for(auto i:t)
        {
            a2[i-'a']++;
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if((a1[i]-a2[i])>0)
            {
                c+=(abs(a1[i]-a2[i]));
            }
        }
        return c;
    }
};