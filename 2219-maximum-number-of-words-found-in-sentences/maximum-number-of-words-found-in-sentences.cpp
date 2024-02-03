class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxx=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int c=count(s[i].begin(),s[i].end(),' ');
            maxx=max(c+1,maxx);
        }
        return maxx;
    }
};