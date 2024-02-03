class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        string k=s;
        for(int i=0;i<s.size();i++)
        {
            k[ind[i]]=s[i];
        }
        return k;
        
    }
};