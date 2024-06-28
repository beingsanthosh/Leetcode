class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxx=0;
        for(int i=0;i<s.size();i++)
        {
            string k=s[i];
            int c=0;
            for(int j=0;j<k.size();j++)
            {
                if(k[j]==' ')
                {
                    c++;
                }
            }
            maxx=max(maxx,c+1);
        }
        return maxx;


    }
};