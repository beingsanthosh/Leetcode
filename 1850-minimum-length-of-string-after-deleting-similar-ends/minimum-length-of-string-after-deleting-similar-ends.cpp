class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r and s[l]==s[r])
        {
            char ch=s[l];
            while(l<=r and s[l]==ch)
            {
                l++;
            }
            while(r>=l and s[r]==ch)
            {
                r--;
            }
        }
        return r-l+1;
        
    }
};