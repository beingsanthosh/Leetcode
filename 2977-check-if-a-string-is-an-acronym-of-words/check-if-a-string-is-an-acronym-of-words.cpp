class Solution {
public:
    bool isAcronym(vector<string>& w, string s) {
        int n=w.size();
        string ss="";
        for(int i=0;i<n;i++){
            string k=w[i];
            ss+=k[0];
        }
        if(ss==s) return true;
        else return false;
    }
};