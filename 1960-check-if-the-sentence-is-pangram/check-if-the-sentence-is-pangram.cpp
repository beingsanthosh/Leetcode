class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>vet(26,0);
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            vet[s[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(vet[i]==0) return false;
        }
        return true;
    }
};