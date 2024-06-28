class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        vector<int>vet;
        for(int i=0;i<w.size();i++)
        {
            string k=w[i];
            for(int j=0;j<k.size();j++)
            {
                if(k[j]==x)
                {
                    vet.push_back(i);
                    break;
                }
            }
        }
        return vet;
    }
};