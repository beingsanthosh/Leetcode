class Solution {
public:
    string finalString(string s) {
        string a="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='i')
            {
                reverse(a.begin(),a.end());
            }
            else
            {
                a+=s[i];
            }
        }
        return a;
    }
};