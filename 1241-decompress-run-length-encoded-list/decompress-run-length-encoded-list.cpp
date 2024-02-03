class Solution {
public:
    vector<int> decompressRLElist(vector<int>& arr) {
        vector<int>vet;
        int n=arr.size();
        for(int i=0;i<n;i+=2)
        {
            while(arr[i])
            {
                vet.push_back(arr[i+1]);
                arr[i]--;
            }
        }
        return vet;
    }
};