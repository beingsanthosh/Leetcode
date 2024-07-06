class Solution {
public:
    int searchInsert(vector<int>& arr, int t) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=t)
            {
                return i;
            }
        }
        return n;

    }
};