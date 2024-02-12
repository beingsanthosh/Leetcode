class Solution {
public:
    int fun(int n,int r)
    {
        int res=1;
        for(int i=0;i<r;i++)
        {
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>>vet;
        for(int i=1;i<=n;i++)
        {
            vector<int>v;
            for(int j=1;j<=i;j++)
            {
                int k=fun(i-1,j-1);
                v.push_back(k);
            }
            vet.push_back(v);
        }
        return vet;
    }
};