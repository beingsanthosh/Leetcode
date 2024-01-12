class Solution {
public:
    int absent(string s)
    {
        int n=s.size(),a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A') a++;
        }
        if(a<2) return 1;
        return 0; 
    }
    int late(string s)
    {
        int c=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                if(c>=3) return 0;
                c++;
            }
            else
            {
                if(c>=3) return 0;
                c=0;
            }
        }
        if(c>=3) return 0;
        return 1;
    }
    bool checkRecord(string s) {
        if(absent(s) and late(s)) return true;
        return false;
        
    }
};