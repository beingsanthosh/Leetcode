class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),f=1;
    int c=0;
        for(int i=n-1;i>=0;i--)
        {
           
            if(s[i]!=' ')
            {
                f=0;
                c++;
            }
            else if(f==0)
            {
                return c;
            }

        }
        return c;
        
    }
};