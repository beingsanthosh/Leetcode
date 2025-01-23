class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string n1="",n2="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(n1.size()!=0)
                {
                n1.pop_back();
                }
            }
            else
            {
                n1+=s[i];
            }
        }
         for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(n2.size()!=0)
                {
                n2.pop_back();
                }
            }
            else
            {
                n2+=t[i];
            }
        }
        if(n1==n2) return true;
        return false;

    }
};