class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int s=0;
        int n=arr.size();
        vector<int>vet(n,0);
        for(int i=0;i<arr.size();i++)
        {
            s+=arr[i];
            vet[i]=s;
        }
        return vet;
    }
};