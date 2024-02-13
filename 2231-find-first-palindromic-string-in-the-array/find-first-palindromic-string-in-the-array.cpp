class Solution {
public:
    int rev(string s)
    {
        int n=s.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                return 0;
            }
            l++;
            r--;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(rev(arr[i]))
            {
                return arr[i];
            }
        }
        return "";
    }
};