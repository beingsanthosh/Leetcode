class Solution {
public:
    string restoreString(string s, vector<int>& indi) {
        int n=s.size();
        string ans(n,' ');
        for(int i=0;i<n;i++)
        {
            int ind=indi[i];
            ans[ind]=s[i];
        }
        return ans;
    }
};