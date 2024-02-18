class Solution {
public:
    string largestOddNumber(string s) {
        int n=s.size(),ind=-1;
        for(int i=n-1;i>=0;i--)
        {
            int a=s[i]-'0';
            if(a%2!=0)
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            return "";
        }
        else
        {
            string k="";
            for(int i=0;i<=ind;i++)
            {
                k+=s[i];
            }
            return k;
        }
    }
};