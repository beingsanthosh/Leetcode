class Solution {
public:
    string firstPalindrome(vector<string>& s) {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            string a=s[i];
            reverse(a.begin(),a.end());
            if(s[i]==a) return s[i];
        }
        return "";
        
    }
};