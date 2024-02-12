class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>>vet;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int s=arr[i][0];
            int e=arr[i][1];
            if(!vet.empty() and e<=vet.back()[1])
            {
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(arr[j][0]<=e)
                {
                    e=max(e,arr[j][1]);
                }
                else
                {
                    break;
                }
            }
            vet.push_back({s,e});
        }
        return vet;

    }
};