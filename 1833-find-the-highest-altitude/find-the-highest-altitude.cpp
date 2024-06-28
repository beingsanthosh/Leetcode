class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxx=0;
        int s=0;
        for(int i=0;i<gain.size();i++)
        {
            s+=gain[i];
             maxx=max(maxx,s);
        }
        return maxx;
    }
};