class Solution {
public:
    string reverseWords(string s) {
        string a="";
        int n=s.size();
        string b="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                reverse(b.begin(),b.end());
                a+=b;
                b="";
                a+=" ";
            }
            else
            {

                b+=s[i];

            }
        }
        reverse(b.begin(),b.end());
        a+=b;
        return a;
    }
};