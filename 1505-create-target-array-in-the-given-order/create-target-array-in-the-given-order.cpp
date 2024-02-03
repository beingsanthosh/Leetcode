class Solution {
public:
    vector<int> createTargetArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        vector<int>vet;
        for(int i=0;i<n;i++)
        {
            vet.insert(vet.begin()+arr2[i],arr1[i]);
        }
        return vet;
    }
};