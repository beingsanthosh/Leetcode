class Solution {
public:
    vector<int> decode(vector<int>& arr, int n) {
        vector<int>vet;
        vet.push_back(n);
        int x=n;
        for(int i=0;i<arr.size();i++)
        {
            x=x^arr[i];
            vet.push_back(x);
        }
        return vet;
    }
};