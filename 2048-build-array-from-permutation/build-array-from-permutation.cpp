class Solution {
public:
    vector<int> buildArray(vector<int>& arr) {
        int n=arr.size();
        vector<int>vet;
        for(int i=0;i<n;i++)
        {
            vet.push_back(arr[arr[i]]);
        }
        return vet;
    }
};