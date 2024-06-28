class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& h, int t) {
        int c=0;
        for(int i=0;i<h.size();i++)
        {
            if(h[i]>=t) c++;
        }
        return c;
    }
};