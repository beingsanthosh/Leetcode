class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>&c, int t) {
        vector<bool>vet;
        int maxx=-1;
        for(int i=0;i<c.size();i++)
        {
            maxx=max(c[i],maxx);
        }
        for(int i=0;i<c.size();i++)
        {
            int k=c[i]+t;
            if(k>=maxx)
            {
                vet.push_back(true);
            }
            else
            {
                vet.push_back(false);
            }
        }
        return vet;
    }
};