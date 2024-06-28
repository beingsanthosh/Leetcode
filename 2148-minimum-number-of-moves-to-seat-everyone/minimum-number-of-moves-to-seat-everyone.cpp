class Solution {
public:
    int minMovesToSeat(vector<int>& s1, vector<int>& s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int k=0;
        int n=s1.size();
        for(int i=0;i<n;i++)
        {
            k+=abs(s1[i]-s2[i]);
        }
        return k;
    }
};