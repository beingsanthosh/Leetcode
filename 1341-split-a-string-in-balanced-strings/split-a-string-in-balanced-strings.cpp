class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size(),c=0;
        int i=0,l=0,r=0;
        while(i<n)
        {
            if(s[i]=='L')
            {
                l++;
                i++;
            }
            else
            {
                r++;
                i++;
            }
            if(l==r)
            {
                c++;
                l=0;
                r=0;
            }
        }
        return c;
        
    }
};