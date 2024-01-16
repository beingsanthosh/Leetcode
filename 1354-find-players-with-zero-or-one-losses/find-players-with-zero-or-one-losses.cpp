class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {
        vector<vector<int>>v;
        int n=mat.size();
        int m=mat[0].size();
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<n;i++)
        {
            mp1[mat[i][1]]++;
        }
        set<int>s1;
        set<int>s2;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++)
        {
            if(mp1.find(mat[i][0])==mp1.end())
            {
                s1.insert(mat[i][0]);
            }
        }
        for(auto i:mp1)
        {
            if(i.second==1)
            {
                s2.insert(i.first);
            }
        }
        for(auto i:s1)
        {
            v1.push_back(i);
        }
        for(auto i:s2)
        {
            v2.push_back(i);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        v.push_back(v1);
        v.push_back(v2);
        return v;
    }
};