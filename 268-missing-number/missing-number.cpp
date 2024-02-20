class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
        }
        int k=(n*(n+1))/2;
        return k-s;
       
    }
};