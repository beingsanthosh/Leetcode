class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        int  n=arr.size();
        sort(arr.begin(),arr.end());
        int a=arr[0]*arr[1];
        int b=arr[n-1]*arr[n-2];
        return b-a;

        
    }
};