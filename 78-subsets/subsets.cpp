class Solution {
public:
    vector<vector<int>> subsets(vector<int>&arr) {
        vector<vector<int>>vet;
        int n=arr.size();
        int s=pow(2,n);
        for(int i=0;i<s;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j)))
                {
                    v.push_back(arr[j]);
                }
            }
            vet.push_back(v);
            v.clear();
        }
        return vet;

        
    }
};