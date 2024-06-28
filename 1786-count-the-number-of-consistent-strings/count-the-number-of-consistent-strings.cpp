class Solution {
public:
    int countConsistentStrings(string s, vector<string>& w) {
        vector<int>vet(26,0);
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            vet[s[i]-97]++;
        }
        for(int i=0;i<w.size();i++)
        {
            string b=w[i];
            int f=0;
            for(auto n:b)
            {
                if(vet[n-97]==0)
                {
                    f=1;
                    break;
                }   
            }
            if(f==0)
            {
                c++;
            }
        }
        return c;
    }
};