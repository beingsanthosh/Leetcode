class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>vet(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vet[j][i]=arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(vet[i].begin(),vet[i].end());
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=vet[i][j];
            }
        }
    }
};