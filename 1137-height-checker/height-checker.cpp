class Solution {
public:
    int heightChecker(vector<int>& h) {
        int c=0;
        vector<int>vet(h);
        sort(h.begin(),h.end());
        for(int i=0;i<h.size();i++)
        {
            if(h[i]!=vet[i])
            {
                c++;
            }
        }
        return c;
    }
};