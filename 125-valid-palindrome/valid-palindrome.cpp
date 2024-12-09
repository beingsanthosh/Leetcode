class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                a+=tolower(s[i]);
            }
        }
        string b=a;
        reverse(b.begin(),b.end());
        return a==b;
        
    }
};