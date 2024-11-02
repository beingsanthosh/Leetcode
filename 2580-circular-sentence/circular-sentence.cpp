class Solution {
public:
    bool isCircularSentence(string s) {
        string prev="",after="";
        int n=s.size();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==' ')
            {
                prev=s[i-1];
                after=s[i+1];
            }
            if(prev!=after)
            {
                return false;
            }
        }
        if(s[0]!=s[n-1])
        {
            return false;
        }
        return true;
    }
};