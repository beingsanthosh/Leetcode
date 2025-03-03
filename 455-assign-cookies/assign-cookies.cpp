class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        int n=g.size(),m=s.size();
        int c=0;
        while(i<n and j<m)
        {
           if (s[j] >= g[i]) { // If cookie can satisfy child
                c++;
                i++; // Move to the next child
            }
            j++;
        }
        return c;
    }
};