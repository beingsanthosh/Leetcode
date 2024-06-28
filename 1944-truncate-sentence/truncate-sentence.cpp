class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int c=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(c==k) return ans;
            if(s[i]==' ')
            {
                c++;
                if(k!=c)
                {
                ans+=s[i];
                }
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
        
    }
};