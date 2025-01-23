class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        int n=w1.size();
        int m=w2.size();
        string n1="";
        string n2="";
        for(int i=0;i<n;i++)
        {
            n1+=w1[i];
        }
        for(int i=0;i<m;i++)
        {
            n2+=w2[i];
        }
        if(n1==n2) return true;
        return false;
        
    }
};