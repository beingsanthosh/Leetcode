class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]>=97 and s[i]<=122)
            {
                continue;
            }
            else if(s[i]>=65 and s[i]<=90)
            {
                s[i]=s[i]^32;
            }
        }
        return s;
    }
};