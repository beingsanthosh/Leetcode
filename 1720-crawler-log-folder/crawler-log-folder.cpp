class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0;
        int n=logs.size();
        for(int i=0;i<n;i++)
        {
            string s=logs[i];
            int k=s.size();
            if(s[0]!='.' and s[k-1]=='/')
            {
                c++;
            }
            else if(s[0]=='.' and s[k-1]=='/')
            {
                if(k>=3)
                {
                    if(c>0)
                    {
                    c--;
                    }
                }
                else if(k==2)
                {
                    continue;
                }
            }
        }
        return c;
    }
};