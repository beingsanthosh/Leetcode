class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len=s.size();
        if(len!=t.size()) return false;
        vector<int>a(200,0);
        vector<int>b(200,0);
        for(int i=0;i<len;i++)
        {
            if(a[s[i]]!=b[t[i]])
            {
                return false;
            }
            a[s[i]]=i+1;
            b[t[i]]=i+1;
        }
        return true;
    }
};